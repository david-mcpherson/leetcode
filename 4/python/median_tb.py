from median import Solution

s = Solution()

assert s.findMedianSortedArrays([1, 3], [2]) == 2.0
assert s.findMedianSortedArrays([1, 2], [3, 4]) == 2.5
assert s.findMedianSortedArrays([], [9]) == 9.0
assert s.findMedianSortedArrays([1, 3], []) == 2.0
assert s.findMedianSortedArrays([1, 3, 4, 5, 6], [2]) == 3.5

print("PASSED ALL TESTS")