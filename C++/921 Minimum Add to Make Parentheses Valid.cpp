class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> mystack;
        for (int i = 0; i < S.length(); i++) {
            char s = S[i];
            if (!mystack.empty() && s == ')' && mystack.top() == '(' ) mystack.pop();
            else mystack.push(s);
        }
        return mystack.size();
    }
};