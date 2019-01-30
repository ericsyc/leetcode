class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<int> dr = {1,-1,0,0};
        vector<int> dc = {0,0,1,-1};
        int ans = 0;
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool> > seen;
        for (int i = 0; i < m; i++) {
            vector<bool> v(n, false);
            seen.push_back(v);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1 && !seen[i][j]) {
                    int tmp = 0;
                    stack<pair<int, int> > mystack;
                    mystack.push({i,j});
                    seen[i][j] = true;
                    while (!mystack.empty()) {
                        pair<int, int> curr = mystack.top();
                        mystack.pop();
                        int r = curr.first, c = curr.second;
                        tmp++;
                        for (int k = 0; k < 4; k++) {
                            int nr = r + dr[k];
                            int nc = c + dc[k];                            
                            if (0 <= nr && nr < m && 0 <= nc && nc < n && !seen[nr][nc] && grid[nr][nc] == 1) {
                                mystack.push({nr,nc});
                                seen[nr][nc] = true;
                            }
                        }                       
                    }
                    ans = max(ans, tmp);
                }
            }
        }
        return ans;
    }
};