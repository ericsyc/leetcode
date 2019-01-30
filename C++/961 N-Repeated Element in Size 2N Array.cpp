class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> s;
        for(int i = 0; i < A.size(); i++) {
            if(s.find(A[i]) == s.end()) s.insert(A[i]);
            else return A[i];
        }        
    }
};