class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int tmp = nums[0], index = 0;
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] > tmp) {
                tmp = nums[i];
                index = i;
            }
        for (int i = 0; i < nums.size(); i++) {
            if (i == index) continue;
            else if (nums[i] * 2 > tmp) return -1;
        }
        return index;
    }
};