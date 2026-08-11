class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sdict = {}
        for s in strs:
            key = "".join(sorted(s))
            if key not in sdict:
                sdict[key] = []
            sdict[key].append(s)
        
        return list(sdict.values())