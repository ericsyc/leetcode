class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int i = 0, ans = 0, l = s.size();
        // for (; i < l; ++i) {
        //     int j = i;
        //     unordered_set<char> seen;
        //     while (j < l && seen.find(s[j]) == seen.end()) {
        //         seen.insert(s[j]);
        //         j++;
        //     }
        //     ans = max(ans, j - i);
        // }
        // return ans;
        int i = 0, j = 0, ans = 0, l = s.size();
        unordered_set<char> seen;
        while (i < l && j < l) {
            while (j < l && seen.find(s[j]) == seen.end()) {
                seen.insert(s[j]);
                j++;
            }
            ans = max(ans, j - i);
            if (seen.find(s[j]) != seen.end()) {
                seen.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};

