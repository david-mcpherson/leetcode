string longestPalindrome(string s){
    int start_ptr = 0, left_ptr, right_ptr, max_ptr, max_len = 0, n = s.size(), tmp;
    char start_char;

    while (start_ptr < n) {
        right_ptr = start_ptr;
        left_ptr = start_ptr;
        start_char = s.at(start_ptr);
        
        // skip over duplicate letters in the middle of the possible palindrome
        while (right_ptr + 1 < n && s.at(right_ptr + 1) == start_char)
            right_ptr++;
        start_ptr = right_ptr + 1;

        // expand left_ptr and right_ptr out simultaneously as much as possible
        while (left_ptr > 0 && right_ptr + 1 < n && s.at(left_ptr - 1) == s.at(right_ptr + 1)) {
            left_ptr--;
            right_ptr++;
        }

        if (tmp > max_len) {
            max_len = tmp;
            max_ptr = left_ptr;
        }
    }
    return s.substr(max_ptr, max_len);    
}