from substring import Solution

def main():
    # Need a mediator to access lengthOfLongestSubstring
    s = Solution()
    # print(f"\nLONGEST SUBSTRING LENGTH = {s.lengthOfLongestSubstring('pwwkew')}\n")
    assert s.lengthOfLongestSubstring("abcdefg") == 7
    assert s.lengthOfLongestSubstring("abcabcbb") == 3
    assert s.lengthOfLongestSubstring("bbbbb") == 1
    assert s.lengthOfLongestSubstring("pwwkew") == 3
    assert s.lengthOfLongestSubstring("idsajoim") == 7
    assert s.lengthOfLongestSubstring("4198 13kl .,1$ ééàçîÎ€$£") == 8

    print("PASSED ALL TESTS")


if __name__ == '__main__':
    main()