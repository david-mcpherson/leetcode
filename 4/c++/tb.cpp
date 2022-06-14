#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

#include "solution.cpp"


int main() {
    Solution s;
    std::vector<int> nums1, nums2;

    // test 1
    nums1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    nums2 = {};
    if (s.findMedianSortedArrays(nums1, nums2) != 5.0) {
        cout << "FAILED TEST 1" << endl;
        return 1;
    }
    // test 2
    nums1 = {1};
    nums2 = {2};
    if (s.findMedianSortedArrays(nums1, nums2) != 1.5) {
        cout << "FAILED TEST 2" << endl;
        return 1;
    }
    // test 3
    nums1 = {1, 4, 5};
    nums2 = {2, 3, 6};
    if (s.findMedianSortedArrays(nums1, nums2) != 3.5) {
        cout << "FAILED TEST 3" << endl;
        return 1;
    }
    // test 4
    nums1 = {1, 2, 3, 4, 5, 6};
    nums2 = {2};
    if (s.findMedianSortedArrays(nums1, nums2) != 3.0){
        cout << "FAILED TEST 4" << endl;
        return 1;
    }
    
    cout << "PASSED ALL TESTS" << endl;
    return 0;
}