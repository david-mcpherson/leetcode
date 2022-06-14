#include <stdio.h>
#include <stdlib.h>
#include "twoSum.c"

int main() {
    int ret_size;
    
    // test 1: [1, 1], 2  -->  [0, 1]
    int nums_1[2] = {1, 1};
    int* ans_1 = twoSum(nums_1, 2, 2, &ret_size);
    if (ans_1[0] != 0 || ans_1[1] != 1 || ret_size != RETURN_SIZE) {
        printf("FAILED TEST 1!\n");
        return 1;
    }
    free(ans_1);
    
    // test 2: [2, 7, 11, 15], 9  -->  [0, 1]
    int nums_2[4] = {2, 7, 11, 15};
    int* ans_2 = twoSum(nums_2, 4, 9, &ret_size);
    if (ans_2[0] != 0 || ans_2[1] != 1 || ret_size != RETURN_SIZE) {
        printf("FAILED TEST 2!\n");
        return 1;
    }
    free(ans_2);
    
    // test 3: [3, 2, 4], 6  -->  [1, 2]
    int nums_3[3] = {3, 2, 4};
    int* ans_3 = twoSum(nums_3, 3, 6, &ret_size);
    if (ans_3[0] != 1 || ans_3[1] != 2 || ret_size != RETURN_SIZE) {
        printf("FAILED TEST 3!\n");
        return 1;
    }
    free(ans_3);
    
    printf("PASSED ALL TESTS.\n");
}