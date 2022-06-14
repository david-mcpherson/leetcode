class Solution:
    def minimumTotal(self, triangle: list) -> int:
        while len(triangle) > 1:
            for col_num, col_val in enumerate(triangle[-2]):
                triangle[-2][col_num] += min(triangle[-1][col_num], triangle[-1][col_num + 1])
            triangle.pop()
        return triangle[0][0]