class Solution:
    def findMedianSortedArrays(self, nums1: list, nums2: list) -> float:
        total_size = len(nums1) + len(nums2)

        # Continuously remove the smallest and then the largest element.
        while total_size > 2:
            # pop smallest
            if not nums1:
                nums2.pop(0)
            elif not nums2:
                nums1.pop(0)
            elif nums1[0] < nums2[0]:
                nums1.pop(0)
            else:
                nums2.pop(0)
            
            # pop largest
            if not nums1:
                nums2.pop(-1)
            elif not nums2:
                nums1.pop(-1)
            elif nums1[-1] > nums2[-1]:
                nums1.pop(-1)
            else:
                nums2.pop(-1)

            total_size -= 2

        if nums1 and nums2:
            return (nums1[0] + nums2[0]) / 2
        elif len(nums1) == 2:
            return (nums1[0] + nums1[1]) / 2
        elif len(nums2) == 2:
            return (nums2[0] + nums2[1]) / 2
        elif nums1:
            return nums1[0]
        else:
            return nums2[0]
