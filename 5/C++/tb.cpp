#include <iostream>

using std::cout;
using std::endl;
using std::string;

#include "soln_2.h"


void unitTest(string input, string expected) {
    string result = longestPalindrome(input);
    if (expected != result) {
        cout << "FAILED" << endl << "Expected: " << expected << endl << "Actual: " << result << endl;
        exit(1);
    }
}


int main() {
    unitTest("a", "a");
    unitTest("babad", "bab");
    unitTest("cbbd", "bb");
    unitTest("bananas", "anana");
    
    cout << "PASSED ALL TESTS" << endl;
    return 0;
}
