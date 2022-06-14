class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        max_length = 0

        start = 0
        while start < n:
            end = start + 1

            while end < n and s[start:end+1].count(s[end]) == 1:
                end += 1

            if end-start > max_length:
                max_length = end-start
            
            start += 1

        return max_length