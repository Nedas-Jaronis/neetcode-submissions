class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = Counter(nums)
        res = 0
        for c in count.values():
            res += c * (c-1) // 2
        return res