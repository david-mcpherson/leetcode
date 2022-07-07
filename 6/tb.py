import solution
s = solution.Solution()

assert s.convert("A", 1) == "A"
assert s.convert("PAHNAPLSIIGYIR", 3) == "PAYPALISHIRING"
assert s.convert("PAHNAPLSIIGYIR", 4) == "PINALSIGYAHRPI"

