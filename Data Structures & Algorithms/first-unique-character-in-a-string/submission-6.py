class Solution:
    def firstUniqChar(self, s: str) -> int:
        seen = defaultdict(int)
        for c in s:
            seen[c] += 1
        
        for i, c in enumerate(s):
            if seen[c] == 1:
                return i
        
        return -1