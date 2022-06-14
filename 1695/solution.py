class Solution:
    def maximumUniqueSubarray(self, nums: list) -> int:
        n = len(nums)
        max_sum = 0
        for start in range(n):
            sublist = set()
            end = start
            subarray_sum = 0
            while end < n:
                next_num = nums[end]
                if next_num in sublist:
                    break
                sublist.add(next_num)
                subarray_sum += next_num
                end += 1
            if max_sum < subarray_sum:
                max_sum = subarray_sum
        return max_sum