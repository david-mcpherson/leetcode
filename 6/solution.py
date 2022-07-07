class Solution:
    def convert(self, s: str, numRows: int) -> str:
        n = len(s)
        result = ' ' * n
        res_posn = 0
        descending = True
        
        for row in range(numRows):
            position = row
            while position < n:
                result[res_posn] = s[position]
                res_posn += 1
                
                if descending:
                    position += 2 * (numRows - 1 - row)
                else:
                    position += 2 * row

                descending = not descending

        return result
