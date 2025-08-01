class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hash = {}

        for i,num in enumerate(nums):
            value = target - num
            if value in hash:
                return [i,hash[value]]
            
            hash[num] = i
        