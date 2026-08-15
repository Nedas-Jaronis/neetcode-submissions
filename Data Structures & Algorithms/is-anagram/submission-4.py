class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sDict = defaultdict(int)
        tDict = defaultdict(int)
        for ch in s:
            sDict[ch] += 1
        for th in t:
            tDict[th] += 1

        if tDict == sDict:
            return True
        else:
            return False