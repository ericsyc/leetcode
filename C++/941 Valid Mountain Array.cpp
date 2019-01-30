class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int i = 0, j = A.size() - 1;
        while (i < j && A[i] < A[i+1]) i++;
        if (i == 0) return false;
        while (j > i && A[j] < A[j-1]) j--;
        if (j == A.size() - 1) return false;
        return j == i;  
    }
};