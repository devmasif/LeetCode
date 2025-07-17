class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """

        left = 0
        right = len(height) - 1
        max_area = 0

        while left < right :
            h = min(height[left] , height[right])
            area = h * (right - left)
            max_area = max(area,max_area)

            if height[left] < height[right]:
                left += 1
            else:
                right -= 1 
        

        return max_area


            
height = [1,8,6,2,5,4,8,3,7]
s = Solution()
print(s.maxArea(height))
        