class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> top(grid.size()), left(grid.size());
        for (int i = 0; i < grid.size(); i++) {
            // int max_top = grid[0][i], max_left = grid[i][0];
            for (int j = 0; j < grid.size(); j++) {
                top[j] = max(top[j], grid[i][j]);
                left[i] = max(left[i], grid[i][j]);
                // if (grid[i][j] > max_left) max_left = grid[i][j];
                // if (grid[j][i] > max_top) max_top = grid[j][i];
            }
            // top[i] = max_top;
            // left[i] = max_left;
        }
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                ans += min(top[j], left[i]) - grid[i][j];
            }
        }
        return ans;
    }
};