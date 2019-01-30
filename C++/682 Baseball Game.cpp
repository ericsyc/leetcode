class Solution {
public:
    int calPoints(vector<string>& ops) {
        int ans = 0;
        stack<int> s;
        for (string op : ops) {
            if (op == "C" && !s.empty()) {
                int tmp = s.top();
                ans -= tmp;
                s.pop();
            }
            else if (op == "D") {
                int tmp = s.top();
                s.push(2*tmp);
                ans += 2*tmp;
            }
            else if (op == "+") {
                int l1 = s.top();
                s.pop();
                int l2 = s.top();
                s.push(l1);
                s.push(l1+l2);
                ans += l1+l2;
            }
            else {
                int tmp = stoi(op);
                s.push(tmp);
                ans += tmp;
            }
        }
        return ans;     
    }
};