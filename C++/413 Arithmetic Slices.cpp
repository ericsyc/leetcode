class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int n = A.size();
        if (n < 3) return 0;
        int ans = 0;
        for (int i = 0; i < n - 2; ++i) {
            int diff = A[i+1] - A[i];
            for (int j = i+2; j < n; ++j) {
                if (A[j] - A[j-1] == diff) {
                    ans++;
                } else{
                    break;
                }
            }
        }
        return ans;
    }
};