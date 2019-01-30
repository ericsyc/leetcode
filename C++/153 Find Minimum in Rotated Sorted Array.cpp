class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int left = 0, right = nums.size() - 1;
        if (nums[right] > nums[left]) return nums[left];
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < nums[mid-1]) return nums[mid];
            if (nums[mid] > nums[mid+1]) return nums[mid+1];
            if (nums[left] > nums[mid]) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
};