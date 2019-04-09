class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int j = 0;
        int l = chars.size();
        while (j < l) {
            int count = 0;
            int start = j;
            while (j < l && chars[j] == chars[start]) {
                ++j;
                count++;
            }
            chars[i++] = chars[start];
            if (count != 1) {
                string s = to_string(count);
                for (char c : s) {
                    chars[i++] = c;
                }
                count = 0;
            }
        }
        return i;
    }
};