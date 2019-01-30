class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = nums.size();
        for (int i = 1; i < l; i++) {
            int tmp = nums[i];
            int j = i -1;
            while (j >= 0 && nums[j] > tmp) {
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = tmp;
        } 
    }
};