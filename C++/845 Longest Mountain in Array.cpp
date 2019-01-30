class Solution {
public:
    int longestMountain(vector<int>& A) {
        int i = 0, ans = 0, n = A.size();
        while (i < n) {
            int j = i;
            while (j < n - 1 && A[j+1] > A[j]) j++;
            if (j - i > 0 && j < n - 1 && A[j] > A[j+1]) {
                while (j < n - 1 && A[j+1] < A[j]) j++;
                ans = max(ans, j - i + 1);
                i = j;
            } else i++;
        }
        return ans;
    }
};