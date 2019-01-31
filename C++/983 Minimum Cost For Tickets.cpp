class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> ans(366);
        for (int day : days) {
            ans[day] = 1;
        }
        for (int i = 1; i < 366; ++i) {
            if (ans[i]) {
                ans[i] = min(ans[max(0, i - 30)] + costs[2], ans[max(0, i - 7)] + costs[1]);
                ans[i] = min(ans[i], ans[max(0, i - 1)] + costs[0]);
            } else {
                ans[i] = ans[i-1];
            }
        }
        return ans[365];
    }
};