class Solution {
public:
    int totalNQueens(int n) {
        int ans = 0;
        vector<int> board(n);
        backtracking(board, ans, 0, n);
        return ans;
    }
    
    void backtracking(vector<int>& board, int& ans, int row, const int& n) {
        if (row == n) {
            ans++;
            return;
        } else {
            for (int col = 0; col < n; ++col) {
                if (place(board, row, col)) {
                    board[row] = col;
                    backtracking(board, ans, row + 1, n);
                }
            }
        }
    }
    
    bool place(const vector<int>& board, const int& row, const int& col) {
        for (int i = 0; i < row; ++i) {
            if (board[i] == col || abs(col - board[i]) == abs(row - i)) {
                return false;
            }
        }
        return true;
    }
};