class Solution:
    def trap(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        total = 0
        leftMax, rightMax = 0, 0
        while left < right:
            leftMax = max(height[left], leftMax)
            rightMax = max(height[right], rightMax)
            if (height[left] <= height[right]):
                total += leftMax - height[left]
                left += 1
            else:
                total += rightMax - height[right]
                right -= 1

            
            
            

        return total