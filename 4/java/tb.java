// Execute this testbench using the following command:
// javac -d . Solution.java; java tb.java

import medianOfTwoArrays.Solution;

class Testbench {
    public static void main(String[] args) {
        Solution s = new Solution();

        // test 1
        if (s.findMedianSortedArrays(new int[] {1}, new int[] {1}) != 1.0)
            throw new RuntimeException("FAILED TEST 1");

        // test 2
        if (s.findMedianSortedArrays(new int[] {1, 2}, new int[] {3}) != 2.0)
            throw new RuntimeException("FAILED TEST 2");

        // test 3
        if (s.findMedianSortedArrays(new int[] {1, 5}, new int[] {}) != 3.0)
            throw new RuntimeException("FAILED TEST 3");

        // test 4
        if (s.findMedianSortedArrays(new int[] {}, new int[] {3, 4, 5, 6, 7, 8}) != 5.5)
            throw new RuntimeException("FAILED TEST 4");

        // test 5
        if (s.findMedianSortedArrays(new int[] {1, 6, 7, 8, 9, 10}, new int[] {3, 5, 55, 665, 949}) != 8.0)
            throw new RuntimeException("FAILED TEST 5");

        System.out.println("PASSED ALL TESTS");
    }
}