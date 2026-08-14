class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ragDict = {}
        magDict = {}

        for r in ransomNote:
            ragDict[r] = ragDict.get(r, 0) + 1
        
        for m in magazine:
            magDict[m] = magDict.get(m, 0) + 1
        
        for key, value in ragDict.items():
            if value > magDict.get(key, 0):
                return False
        
        return True