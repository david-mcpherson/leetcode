package medianOfTwoArrays;

import java.util.ArrayList;

public class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int total_length = nums1.length + nums2.length;
        // total elements = (end1 - start1) + (end2 - start2) + 2
        int start1 = 0;
        int start2 = 0;
        int end1 = nums1.length - 1;
        int end2 = nums2.length - 1;

        // continuously remove the largest and then the smallest element until 1 or 2 are left
        while (end1 - start1 + end2 - start2 > 0) {
            // remove largest
            if (end1 - start1 < 0) {
                end2--;
            } else if (end2 - start2 < 0) {
                end1--;
            } else if (nums1[end1] > nums2[end2]) {
                end1--;
            } else {
                end2--;
            }
            // remove smallest
            if (end1 - start1 < 0) {
                start2++;
            } else if (end2 - start2 < 0) {
                start1++;
            } else if (nums1[start1] < nums2[start2]) {
                start1++;
            } else {
                start2++;
            }
        }

        // Case 1: nums1 has the only element
        if (end2 - start2 == -1 && end1 == start1) {
            return nums1[start1];
        }
        // Case 2: nums2 has the only element
        else if (end1 - start1 == -1 && end2 == start2) {
            return nums2[start2];
        }
        // Case 3: nums1 has both elements
        else if (end1 - start1 == 1) {
            return (nums1[start1] + nums1[end1]) / 2.0;
        }
        // Case 4: nums2 has both elements
        else if (end2 - start2 == 1) {
            return (nums2[start2] + nums2[end2]) / 2.0;
        }
        // Case 5: nums1 and nums2 each have one element
        return (nums1[start1] + nums2[start2]) / 2.0;
    }
}