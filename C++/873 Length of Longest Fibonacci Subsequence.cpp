class Solution {
public:
    int lenLongestFibSubseq(vector<int>& A) {
        int ans = 0;
        int N = A.size();
        unordered_set<int> s(A.begin(), A.end());
        for (int i = 0; i < N - 2; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int first = A[i], second = A[j];
                int l = 2;
                while (s.find(first + second) != s.end()) {
                    int tmp = first + second;
                    first = second;
                    second = tmp;
                    l++;
                }
                ans = max(ans, l);   
            }
        }
        return ans > 2 ? ans : 0;
    }
};