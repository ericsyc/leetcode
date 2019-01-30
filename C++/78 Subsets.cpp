class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans(1, vector<int>());
        for (int num:nums) {
            int n = ans.size();
            for (int i = 0; i < n; i++) {
                vector<int> tmp = ans[i];
                tmp.push_back(num);
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};