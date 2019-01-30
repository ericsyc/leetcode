class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int l = nums.size();
        int res = 0;
        vector<bool> visited(l, false);
        for (int i = 0; i < l; i++) {
            if (!visited[i]) res = max(res, len(nums, visited, i));     
        }
        return res;
    }
    int len(vector<int>& nums, vector<bool>& visited, int start) {
        int ans = 0;
        while (!visited[start]) {
            visited[start] = true;
            start = nums[start]; 
            ans++;
        }
        return ans;        
    }
};