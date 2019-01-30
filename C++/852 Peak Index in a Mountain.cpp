class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int low = 0, high = A.size();
        while (low < high) {
            int mid = (low + high) / 2;
            if (A[mid] > A[mid + 1] && A[mid] > A[mid -1]) return mid;
            if (A[mid] < A[mid + 1]) low = mid + 1;
            else if (A[mid] > A[mid + 1]) high = mid;
        }
        return low;
    }
};