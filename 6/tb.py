import solution
s = solution.Solution()

assert s.convert("A", 1) == "A"
assert s.convert("AB", 1) == "AB"
assert s.convert("AB", 2) == "AB"
assert s.convert("ABC", 2) == "ACB"
assert s.convert("ABC", 3) == "ABC"
assert s.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR"
assert s.convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI"

print("PASSED ALL TESTS :D")

