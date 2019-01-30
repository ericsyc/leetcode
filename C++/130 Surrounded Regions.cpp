class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n_r = board.size();
        if (n_r == 0) return;
        int n_c = board[0].size();
        for (int r = 0; r < n_r; r++) {
            dfs(board, r, 0);
            dfs(board, r, n_c - 1);
        }
        for (int c = 0; c < n_c; c++) {
            dfs(board, 0, c);
            dfs(board, n_r - 1, c);
        }
        for (int r = 0; r < n_r; r++) {
            for (int c = 0; c < n_c; c++) {
                if (board[r][c] == '0') board[r][c] = 'O';
                else if (board[r][c] == 'O') board[r][c] = 'X';
            }
        }
    }
    void dfs(vector<vector<char>>& b, int i, int j) {
        if (i < 0 || j < 0 || i >= b.size() || j >= b[0].size()) return;
        if (b[i][j] == 'O') {
            b[i][j] = '0';
            dfs(b, i-1, j);
            dfs(b, i+1, j);
            dfs(b, i, j-1);
            dfs(b, i, j+1);
        }
    }
};