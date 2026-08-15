class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sDict = {}
        tDict = {}
        for ch in s:
            sDict[ch] = sDict.get(ch, 0) + 1
        for th in t:
            tDict[th] = tDict.get(th, 0) + 1

        if tDict == sDict:
            return True
        else:
            return False