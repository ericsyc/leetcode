class Solution {
public:
    double myPow(double x, int n) {
        if (x == 1.0) return 1.0;
        if (x == 0.0 && n != 0) return 0.0;
        if (n == 1) return x;
        if (n == -1) return 1/x;
        if (n == 0) return 1.0;
        if (n % 2 == 0) return myPow(x*x, n/2);
        else {
            if (n > 0) return myPow(x*x, n/2)* x;
            else return myPow(x*x, n/2) / x;
        }
    }
};