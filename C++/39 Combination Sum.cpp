class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> tmp;
        backtracking(candidates, target, tmp, ans, 0);
        return ans;
    }
    
    void backtracking(const vector<int>& candidates, int target, vector<int>& tmp, vector<vector<int>>& ans, int start) {
        // if (target < 0) return;
        if (target == 0) {
            ans.push_back(tmp);
            return;
        } else {
            for (int i = start; i < candidates.size(); ++i) {
                if (target >= candidates[i]) {
                    tmp.push_back(candidates[i]);
                    backtracking(candidates, target - candidates[i], tmp, ans, i);
                    tmp.pop_back();
                }   
            }
        }
    }
};