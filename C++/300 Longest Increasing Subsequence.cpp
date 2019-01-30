class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int N = nums.size();
        if (N == 0) return 0;
        if (N == 1) return 1;
        int ans = 0;
        vector<int> dp(N);
        dp[0] = 1;
        for (int i = 1; i < N; ++i) {
            int tmp = 0;
            for (int j = 0; j < i; ++j) {
                if (nums[j] < nums[i]) tmp = max(tmp, dp[j]);
            }
            dp[i] = tmp + 1;
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};