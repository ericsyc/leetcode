class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double tmp = 0;
        for (int i = 0; i < k; i++) tmp += nums[i];
        double ans = tmp;
        for (int i = k; i < nums.size(); i++) {
            tmp = tmp + nums[i] - nums[i-k];
            ans = max(ans, tmp);
        }
        return ans / k; 
    }
};