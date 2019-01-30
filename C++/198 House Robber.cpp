class Solution {
public:
    int rob(vector<int>& nums) {
        const int l = nums.size();
        if (l == 0) return 0;
        if (l == 1) return nums[0];
        vector<int> res(l);
        res[0] = nums[0];
        res[1] = max(res[0], nums[1]);
        int ans = max(res[0], res[1]);
        for (int i = 2; i < nums.size(); i++) {
            res[i] = max(res[i-1], res[i-2]+nums[i]);
            ans = max(res[i], ans);
        }
        return ans;
    }
};