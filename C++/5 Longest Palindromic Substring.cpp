class Solution {
public:
    string longestPalindrome(string s) {
        int l = s.size();
        if (l <= 0) return "";
        string ans = "";
        bool dp[l][l];
        for (int i = 0; i < l; ++i) {
            for (int j = 0; j < l; ++j) {
                dp[i][j] = false;
            }
        }
        for (int i = l - 1; i >= 0; --i) {
            for (int j = i; j < l; ++j) {
                if (j - i == 0) dp[i][j] = true;
                else if (j - i == 1) dp[i][j] = (s[i] == s[j]);
                else if (s[i] == s[j] && dp[i+1][j-1]) dp[i][j] = true;
                if (dp[i][j]) {
                    ans = ans.size() > (j - i + 1) ? ans : s.substr(i, j-i+1);
                }
            }
        }
        return ans;
    }
};