class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mapS = {}
        mapT = {}

        for c in s:
            mapS[c] = mapS.get(c, 0) + 1
        
        for ct in t:
            mapT[ct] = mapT.get(ct, 0) + 1
        
        if mapS == mapT:
            return True
        else:
            return False