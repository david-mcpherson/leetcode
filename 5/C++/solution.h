char * longestPalindrome(char * s){
    char* output = (char*)malloc(1);
    output[0] = '\0';
    int max_len = 0; 
    int n = strlen(s);

    // check each possible substring
    for (int start = 0; start < n; start++) {
        for (int end = start + 1; end <= n; end++) {
            // check if the substring is a palindrome.
			
			
            for (int offset = 0; offset < (end - start) / 2; offset++) {
                if (s[start + offset] != s[end - offset - 1])
                    goto non_palindrome;
            }
            if (end - start > max_len) {
                max_len = end - start;
                free(output);
                output = (char*)malloc(max_len + 1);
                strncpy(output, s + start, max_len);
                output[end - start] = '\0';
            }
            non_palindrome: continue;
        }
    }
    return output;
}
