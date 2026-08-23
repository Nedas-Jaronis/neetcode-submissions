import math
class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        for i in range(k):
            maxNum = float('-inf')
            maxIdx = 0
            for j in range(len(gifts)):
                if gifts[j] > maxNum:
                    maxNum = gifts[j]
                    maxIdx = j
            gifts[maxIdx] = math.isqrt(gifts[maxIdx])
        return sum(gifts)