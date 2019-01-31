class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        backtracking(ans, 0, n, board);
        return ans;
    }
    
    void backtracking(vector<vector<string>>& ans, int row, const int& n, vector<string>& board) {
        if (row == n) {
            ans.push_back(board);
        } else {
            for (int i = 0; i < n; ++i) {
                if (place(board, row, i, n)) {
                    board[row][i] = 'Q';
                    backtracking(ans, row + 1, n, board);
                    board[row][i] = '.';
                }
            }
        }
    }
    
    bool place(vector<string>& board, int row, int col, int n) {
        for (int i = 0; i < row; ++i) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i,--j) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        for (int i = row -1, j = col + 1; i >= 0 && j < n; --i, ++j) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
};