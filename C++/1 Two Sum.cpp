class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(target - nums[i]) == mp.end()) {
                mp.insert({nums[i], i});
                
            }
            else {
                return {mp[target - nums[i]], i};
            }
        }
    }
};