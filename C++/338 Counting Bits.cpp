class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1);
        if (num == 0) return ans;
        ans[1] = 1;
        int last = 2;
        for (int i = 2; i <= num; i*=2) ans[i] = 1;
        for (int i = 3; i <= num; i++) {
            if (ans[i]) last = i;
            else {
                ans[i] = 1 + ans[i-last];
            }
        }
        return ans;
    }
};