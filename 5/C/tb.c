#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "solution.h"

void unitTest(char* input, char* expected) {
    char* result = longestPalindrome(input);
    if (strcmp(expected, result)) {
        printf("\nFAILED\nExpected: %s\nActual:   %s\n", expected, result);
        exit(1);
    }
}


int main() {
    unitTest("babad", "bab");
    unitTest("cbbd", "bb");
    unitTest("a", "a");
    
    printf("PASSED ALL TESTS\n");
    return 0;
}
