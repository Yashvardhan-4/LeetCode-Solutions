class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0) return 0;
    }
        if(n == 1) return x;
        if(n == 0) return 1;
        return (double)x * myPow(x,n-1);
};
