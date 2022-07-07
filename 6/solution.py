class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s

        n = len(s)
        result = ''
        for row in range(numRows):
            position = row
            descending = True

            while position < n:
                result += s[position]
               
                if position + 1 == n:
                    break
                elif row == 0 or row + 1 == numRows:
                    position += 2 * numRows - 2
                elif descending:
                    position += 2 * (numRows - 1 - row)
                else:
                    position += 2 * row

                descending = not descending

        return result
