class Solution:
    def customSortString(self, order: str, s: str) -> str:
        count = defaultdict(int)
        for char in s:
            count[char] += 1
        
        res = []
        for char in order:
            if char in count:
                res.append(char * count[char])
                del count[char]
        
        for char in count:
            res.append(char * count[char])
        
        return "".join(res)