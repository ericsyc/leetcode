class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for (string word :words) {
            bool flag = true;
            if (word.length() != pattern.length()) continue;
            unordered_map<char, char> m1;
            unordered_map<char, char> m2;
            for (int i = 0; i < word.length(); i++) {
                char w = word[i];
                char p = pattern[i];
                if (!m1.count(w)) m1.insert({w,p});
                if (!m2.count(p)) m2.insert({p,w});
                if (m1[w]!=p || m2[p]!=w) flag = false;
            }
            if (flag) ans.push_back(word);
        }
        return ans;
    }
};