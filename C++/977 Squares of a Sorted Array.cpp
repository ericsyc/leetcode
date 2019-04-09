class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size();
        int i = 0;
        while (i < n - 1 && A[i] <= 0) {
            i++;
        }
        i--;
        int j = i + 1;
        vector<int> ans(n);
        int t = 0;
        while (i >= 0 && j < n) {
            if (A[i] * A[i] < A[j] * A[j]) {
                ans[t++] = A[i] * A[i];
                i--;
            } else {
                ans[t++] = A[j] * A[j];
                j++;
            }
        }
        while (j < n) {
            ans[t++] = A[j] * A[j];
            j++;
        }
        while (i >= 0) {
            ans[t++] = A[i] * A[i];
            i--;
        }
        return ans;
    }
};