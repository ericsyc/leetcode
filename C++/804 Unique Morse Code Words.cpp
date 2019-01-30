class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> transformations;
        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            string tmp = "";
            for (int j = 0; j < word.length(); j++) {
                tmp += morse_code[word[j] - 'a'];
            }
            transformations.insert(tmp);
        }
        return transformations.size();
    }
};


// int uniqueMorseRepresentations(vector<string>& words) {
//     vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
//     unordered_set<string> gen_codes;
    
//     for(auto word : words) {
//         string code = "";
//         for(auto ch : word)
//             code += morse_code[ch - 'a'];
//         gen_codes.insert(code);
//     }
    
//     return gen_codes.size();
// }