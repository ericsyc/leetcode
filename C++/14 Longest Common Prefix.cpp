class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        if (strs.size() == 1) return strs[0];
        string ans = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < ans.length() && j < strs[i].length()) {
                if (ans[j] != strs[i][j]) {
                    ans = ans.substr(0, j);
                    break;
                }
                else j++;
            }
            ans = ans.substr(0, j);
        }
        return ans;     
    }
};