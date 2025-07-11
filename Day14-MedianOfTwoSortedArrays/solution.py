class Solution(object):
    def findMedianSortedArrays(self,nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        merge_arr = []
        


        total_length = len(nums1) + len(nums2)

        nums1_index = 0
        nums2_index = 0

        while nums1_index + nums2_index < total_length:
            if nums1_index >= len(nums1):
                  merge_arr.append(nums2[nums2_index])
                  nums2_index += 1
            elif nums2_index >= len(nums2):
                  merge_arr.append(nums1[nums1_index])
                  nums1_index += 1
            else:
                if nums1[nums1_index] < nums2[nums2_index]:
                    merge_arr.append(nums1[nums1_index])
                    nums1_index += 1
                else:
                    merge_arr.append(nums2[nums2_index])
                    nums2_index += 1
                  
        
        if total_length%2 == 0:
            median = ( merge_arr[int(total_length/2-1)] + merge_arr[int(total_length/2)] ) / 2
        else:
             median = merge_arr[int(total_length/2)]

        print(merge_arr)
        return median


nums1 = [1,2]
nums2 = [3,4]

solution = Solution()
median = solution.findMedianSortedArrays(nums1,nums2)

print(median)