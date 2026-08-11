class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        tdict = {}
        sdict = {}
        for cs in s:
            sdict[cs] = sdict.get(cs, 0) + 1
        
        for ts in t:
            tdict[ts] = tdict.get(ts, 0) + 1
        
        if(tdict == sdict):
            return True
        else:
            return False