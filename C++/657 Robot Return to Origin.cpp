class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (auto move : moves) {
            if (move == 'U') x++;
            else if (move == 'D') x--;
            else if (move == 'L') y++;
            else y--;
        }
        return x == 0 && y == 0;
        
    }
};