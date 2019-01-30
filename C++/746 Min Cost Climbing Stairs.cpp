class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int l = cost.size();
        if (l == 1) return cost[0];
        vector<int> ans(cost.size());
        ans[0] = cost[0];
        ans[1] = cost[1];
        for (int i = 2; i < l; i++) {
            ans[i] = min(ans[i-1], ans[i-2]) + cost[i];
        }
        return min(ans[l-1], ans[l-2]);
    }
};