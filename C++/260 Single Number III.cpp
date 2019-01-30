class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int num : nums) {
            if (m.count(num) > 0) m[num]++;
            else m.insert({num, 1});
        }
        vector<int> ans;
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second == 1) ans.push_back(it->first);
        }
        return ans;
    }
};