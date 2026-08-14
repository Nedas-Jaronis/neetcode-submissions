class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ransDict = {}
        magDict = {}
        for c in ransomNote:
            ransDict[c] = ransDict.get(c, 0) + 1
        for m in magazine:
            magDict[m] = magDict.get(m, 0) + 1
        
        for key, value in ransDict.items():
            if value > magDict.get(key, 0):
                return False
        
        return True
