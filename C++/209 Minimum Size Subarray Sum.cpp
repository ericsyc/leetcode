class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int i = 0, j = 0, cumsum = 0, ans = INT_MAX, n = nums.size();
        for (int i = 0; i < n; i++) {
            cumsum += nums[i];
            if (cumsum >= s) {
                while (cumsum >= s) cumsum -= nums[j++];
                ans = min(ans, i - j + 2);
            }    
        }
        return ans < INT_MAX ? ans : 0;
    }
};