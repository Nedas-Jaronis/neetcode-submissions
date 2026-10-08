class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        num = Counter(nums)
        for value in num.values():
            if value > 1:
                return True
        
        return False

