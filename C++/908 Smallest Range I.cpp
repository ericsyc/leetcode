class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int max_a = A[0], min_a = A[0];
        for (int a:A) {
            max_a = max_a > a ? max_a : a;
            min_a = min_a < a ? min_a : a;
        }
        if (max_a - min_a >= 2 * K) return max_a - min_a - 2 * K;
        else return 0;
    }
};