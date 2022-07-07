class Solution:
    def convert(self, s: str, numRows: int) -> str:
        n = len(s)
        result = ''
        descending = True
        print("s: {s}; numRows: {numRows}; n: {n}") 
        for row in range(numRows):
            position = row

            while position < n:
                result += s[position]
               
                if position + 1 == n:
                    break
                elif descending:
                    position += 2 * (numRows - 1 - row)
                else:
                    position += 2 * row

                descending = not descending

        return result
