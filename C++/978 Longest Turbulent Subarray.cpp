class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        int ans = 0;
        int tmp = 0;
        for (int i = 0; i < A.size(); ++i) {
            if (i == 0 || A[i] == A[i-1]) tmp = 1;
            else if ((A[i] < A[i-1] && A[i-1] > A[i-2]) || (A[i] > A[i-1] && A[i-1] < A[i-2])) tmp++;
            else tmp = 2;
            ans = max(ans, tmp);
        }
        return ans;
    }
};