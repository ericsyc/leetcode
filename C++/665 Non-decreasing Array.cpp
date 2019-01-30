class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int i = 0;
        int s = nums.size();
        while (i+1< s && nums[i] <= nums[i+1]) i++;
        if (i >= s - 2) return true;
        int j = s - 1;
        while (j >= 1 && nums[j] >= nums[j-1]) j--;
        if (i+1==j) return (nums[i-1] <= nums[j]) || (nums[j+1] >= nums[i]);   
        return false;
    }
};