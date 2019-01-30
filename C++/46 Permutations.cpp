class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        backtracking(nums, 0, ans);
        return ans;
    }
    
    void backtracking(vector<int>& nums, int start, vector<vector<int>>& ans) {
        if (nums.size() == start) ans.push_back(nums);
        else {
            for (int i = start; i < nums.size(); ++i) {
                swap(nums[start], nums[i]);
                backtracking(nums, start+1, ans);
                swap(nums[start], nums[i]);
            }
        }
    }
};