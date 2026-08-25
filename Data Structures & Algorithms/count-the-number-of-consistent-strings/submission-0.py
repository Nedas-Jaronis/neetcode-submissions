class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        allowedSet = set(allowed)
        count = 0
        
        for word in words:
            flag = False
            for c in word:
                if c not in allowedSet:
                    flag = True
                    break
            if flag == False:
                count += 1
        
        return count