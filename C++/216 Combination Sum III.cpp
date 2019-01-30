class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {  
        vector<int> candidates(9);
        for (int i = 0; i < 9; ++i) candidates[i] = i + 1;
        vector<vector<int>> ans;
        vector<int> tmp;
        int cumsum = 45;
        backtracking(candidates, n, tmp, ans, 0, k, cumsum);
        return ans;    
    }
    
    void backtracking(const vector<int>& candidates, int target, vector<int>& tmp, vector<vector<int>>& ans, int start, int num, int cumsum) {
        if (target == 0 && num == 0) {
            ans.push_back(tmp);
            return;
        } else {
            for (int i = start; i < candidates.size(); ++i) {
                if (target >= candidates[i] && target <= cumsum) {
                    tmp.push_back(candidates[i]);
                    backtracking(candidates, target - candidates[i], tmp, ans, i+1, num - 1, cumsum - candidates[i]);
                    tmp.pop_back();
                }   
            }
        }
    }
};