class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int ans = INT_MIN;
        // int N = nums.size();
        // if (N == 0) return 0;
        // for (int i = 0; i < N; ++i) {
        //     int tmp = nums[i];
        //     int cumproduct = nums[i];
        //     for (int j = i + 1; j < N; ++j) {
        //         cumproduct *= nums[j];
        //         tmp = max(cumproduct, tmp);
        //     }
        //     ans = max(ans, tmp);
        // }
        // return ans;
        pair<int, int> mm({1,1});
        int ans = INT_MIN;
        for (int num : nums) {
            mm = minmax({num, num * mm.first, num * mm.second});
            ans = max(mm.second, ans);
        }
        return ans;
    }
};