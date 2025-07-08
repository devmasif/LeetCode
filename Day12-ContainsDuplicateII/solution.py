class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        numbers = {}
        for ind in range(len(nums)):
            val = nums[ind]
            if val in numbers and ind - numbers[val] <= k :
                return True
            numbers[val] = ind

        return False