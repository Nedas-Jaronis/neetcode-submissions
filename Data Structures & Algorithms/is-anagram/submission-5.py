class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mapS = defaultdict(int)
        mapT = defaultdict(int)

        for c in s:
            mapS[c] += 1
        
        for ct in t:
            mapT[ct] += 1
        
        if mapS == mapT:
            return True
        else:
            return False