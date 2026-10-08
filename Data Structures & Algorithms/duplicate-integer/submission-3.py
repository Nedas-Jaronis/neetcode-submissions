class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        num = Counter(nums)
        for x, value in num.items():
            print(x, value)
            if value > 1:
                return True
        
        return False

