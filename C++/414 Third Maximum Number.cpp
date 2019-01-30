class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        bool flag = false;
        for (int num : nums) {
            if (num == INT_MIN) flag = true;
            if (num > first) {
                int tmp = first;
                first = num;
                third = second;
                second = tmp;
            }
            else if (num > second && num < first) {
                int tmp = second;
                second = num;
                third = tmp;
            }
            else if (num > third && num < second) {
                third = num;
            }
        }
        // cout << first << " " << second << " " << third;
        int res = flag?((second==INT_MIN)?first:third):((third==INT_MIN)?first:third);
        return res;
    }
};