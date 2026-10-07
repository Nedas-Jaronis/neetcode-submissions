class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        runningCount = 0
        maxCount = float("-inf")
        for num in nums:
            if num == 1:
                runningCount += 1
            
            maxCount = max(runningCount, maxCount)
            if num != 1:
                runningCount = 0
        
        return maxCount