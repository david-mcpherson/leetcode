class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        while (nums1.size() + nums2.size() > 2) {
            // remove the largest element
            if (!nums1.size())
                nums2.pop_back();
            else if (!nums2.size())
                nums1.pop_back();
            else if (nums1.back() > nums2.back())
                nums1.pop_back();
            else
                nums2.pop_back();

            // remove the smallest element
            if (!nums1.size())
                nums2.erase(nums2.begin());
            else if (!nums2.size())
                nums1.erase(nums1.begin());
            else if (nums1.front() < nums2.front())
                nums1.erase(nums1.begin());
            else
                nums2.erase(nums2.begin());   
        }

        // Get the median using the last 1 or 2 elements
        if (!nums1.size()) {
            if (nums2.size() == 2)
                return (nums2.front() + nums2.at(1)) / 2.0;
            else
                return nums2.front();
        } else if (!nums2.size()) {
            if (nums1.size() == 2)
                return (nums1.front() + nums1.at(1)) / 2.0;
            else
                return nums1.front();
        } else
            return (nums1.front() + nums2.front()) / 2.0;
    }
};