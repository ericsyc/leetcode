class Solution {
public:
    string toLowerCase(string str) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
            }
        }
        return str;
    }

    // string toLowerCase(string str) {        
    // for (char& c : str) {
    //     if (c >= 'A' && c <= 'Z') c += 32;
    // }
    // return str;
}
};