class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> tmp;
        vector<vector<int>> ans;
        backtracking(ans, nums, 0, tmp);
        return ans;  
    }
    
    void backtracking(vector<vector<int>>& ans, vector<int>& nums, int start, vector<int>& tmp) {
        ans.push_back(tmp);
        for (int i = start; i < nums.size(); ++i) {
            if (i == start || nums[i] != nums[i-1]) {
                tmp.push_back(nums[i]);
                backtracking(ans, nums, i+1, tmp);
                tmp.pop_back();
            }
        }
        
    }
};