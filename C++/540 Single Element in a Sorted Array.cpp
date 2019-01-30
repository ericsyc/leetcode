class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return mid;
            else if (nums[mid] == nums[mid+1]) {
                if ((mid - left) % 2 == 0) left = mid + 2;
                else right = mid - 1;
            }
            else {
                if ((mid - left) % 2 == 1) left = mid + 1;
                else right = mid - 2;
            }
        }
        return nums[right];
    }
};