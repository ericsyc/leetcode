class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> ans(l);
        ans[0] = 1;
        for (int i = 1; i < l; i++) {
            ans[i] = nums[i-1] * ans[i-1];
        }
        int multiplier = nums[l - 1];
        for (int i = l - 2; i >= 0; i--) {
            ans[i] = ans[i] * multiplier;
            multiplier *= nums[i];
        }
        return ans;
    }
};