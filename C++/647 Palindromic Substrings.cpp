class Solution {
public:
    int countSubstrings(string s) {
        int l = s.size();
        int ans = 0;
        bool dp[l][l];
        for (int i = l-1; i >= 0 ; --i) {
            for (int j = i; j < l; ++j) {
                dp[i][j] = s[i] == s[j] && (j - i < 3 || dp[i+1][j-1]);
                if (dp[i][j]) ans++;
            }
        }
        return ans;
    }
};