class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        maxCount = 0
        decCount, dec = 0, float('inf')
        incCount, inc = 0, float('-inf')
        for num in nums:
            if num < dec:
                decCount += 1
            else:
                decCount = 1
            dec = num
            maxCount = max(maxCount, decCount)
        
        for num in nums:
            if num > inc:
                incCount += 1
            else:
                incCount = 1
            inc = num
            maxCount = max(maxCount, incCount)
        
        return maxCount
                