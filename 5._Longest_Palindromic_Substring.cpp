class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int k = 0;
        int max_start = 0;
        int max_length = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) k = i;
            int left = k;
            int right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            left++;
            right--;
            if (max_length < (right - left + 1)) {
                max_start = left;
                max_length = right - left + 1;
            }

        }
        return s.substr(max_start, max_length);


    }
};
