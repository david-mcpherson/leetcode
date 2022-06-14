#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>

#include "solution.h"

using std::cout;
using std::endl;


void unitTest(char* input, char* expected) {
    char* result = longestPalindrome(input);
    if (strcmp(expected, result)) {
        cout << "FAILED" << endl << "Expected: " << expected << endl << "Actual: " << result << endl;
        exit(1);
    }
    delete result;
}


int main() {
    unitTest("babad", "bab");
    unitTest("cbbd", "bb");
    unitTest("a", "a");
    
    cout << "PASSED ALL TESTS" << endl;
    return 0;
}
