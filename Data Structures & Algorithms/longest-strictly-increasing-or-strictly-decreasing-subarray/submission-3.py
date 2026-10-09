class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        incCount = 1
        decCount = 1
        best = 1
        
        for i in range(1, len(nums)):
            if nums[i] > nums[i - 1]:
                incCount += 1
                decCount = 1
            elif nums[i] < nums[i - 1]:
                decCount += 1
                incCount = 1
            else:
                incCount = 1
                decCount = 1
            
            best = max(best, incCount, decCount)
        
        return best