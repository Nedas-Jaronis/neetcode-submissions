class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        strdict = {}

        for s in strs:
            key = "".join(sorted(s))
            if key not in strdict:
                strdict[key] = []
            strdict[key].append(s)
        
        return list(strdict.values())