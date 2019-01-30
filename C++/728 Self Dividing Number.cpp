class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (i % 10 != 0) {
                int num = i;
                bool flag = true;
                while (num) {
                    int d = num % 10;
                    if (d == 0 || i % d != 0) {
                        flag = false; 
                        break;
                    }
                    num /= 10;
                }
                if (flag) ans.push_back(i);
            }        
        }
        return ans;
    }
};