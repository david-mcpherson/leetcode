#include <iostream>

using std::cout;
using std::endl;
using std::string;

#include "solution.cpp"
Solution soln;

void check(string s, int numRows, string expected) {
    if (soln.convert(s, numRows) != expected) {
        cout << "FAIL!" << endl
            << "input: " << s << endl
            << "numRows: " << numRows << endl
            << "expected: " << expected << endl
            << "actual: " << soln.convert(s, numRows) << endl << endl;
        exit(1);
    }
}

int main() {
    check("A", 1, "A");
    check("AB", 1, "AB");
    check("AB", 2, "AB");
    check("ABC", 1, "ABC");
    check("ABC", 2, "ACB");
    check("ABC", 3, "ABC");

    cout << "SUCCESS!" << endl;
    return 0;
}
