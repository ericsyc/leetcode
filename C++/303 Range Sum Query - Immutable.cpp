class NumArray {
public:
    vector<int> s;
    NumArray(vector<int> nums) {
        int tmp = 0;
        s.push_back(tmp);
        for (int num:nums) {
            tmp += num;
            s.push_back(tmp);
        }
        
    }
    
    int sumRange(int i, int j) {
        return s[j+1] - s[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */