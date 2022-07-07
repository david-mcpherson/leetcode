class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        string result = s;
        int idx = 0;
        int n = s.size();
        
        for (int row = 0; row < numRows; row++) {
            int posn = row;
            int descending = true;

            while (posn < n) {
                result[idx++] = s[posn];

                if (posn + 1 == n)
                    break;
                else if (!row || row + 1 == numRows)
                    posn += 2 * numRows - 2;
                else if (descending)
                    posn += 2 * (numRows - 1 - row);
                else
                    posn += 2 * row;

                descending = !descending;
            }
        }
        
        return result;
    }
};
