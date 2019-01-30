class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> can(n);
        can[n-1] = true;
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i] + i >= n - 1) {
                can[i] = true;
            } else {
                for (int j = 0; j <= nums[i]; ++j) {
                    if (can[i + j]) {
                        can[i] = true;
                        break;
                    }
                }
            }
        }
        return can[0];
    }
};