class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        vector<int> v(10000);
        for (int d : deck) v[d]++;
        int g = -1;
        for (int vv : v) {
            if (vv > 0) {
                if (g == -1) g = vv;
                else g = gcd(g, vv);
            }
        }
        return g >= 2;
    }
    int gcd(int x, int y) {
        return x == 0? y : gcd(y%x, x);
    }
};