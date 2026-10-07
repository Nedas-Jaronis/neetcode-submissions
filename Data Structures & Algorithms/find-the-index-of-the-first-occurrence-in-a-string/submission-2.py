class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        runningCount = 0
        finalCount = len(needle)
        if finalCount == 0:
            return 0
        
        i = 0
        while i < len(haystack):
            if needle[runningCount] == haystack[i]:
                runningCount += 1
                if runningCount == finalCount:
                    return i - finalCount + 1
            else:
                i -= runningCount
                runningCount = 0
            i += 1
        
        return -1