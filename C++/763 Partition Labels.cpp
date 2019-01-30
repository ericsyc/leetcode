class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> l(26);
        vector<int> ans;
        for (int i = 0; i < S.length(); i++) {
            l[S[i] - 'a'] = i;
        }
        int last = 0, start = 0;
        for (int i = 0; i < S.length(); i++) {
            last = max(last, l[S[i] - 'a']);
            if (last == i) {
                ans.push_back(last - start + 1);
                start = i + 1;
            }
        }
        return ans;
    }
};