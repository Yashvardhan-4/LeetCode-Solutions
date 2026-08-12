class Solution {
public:
    double myPow(double x, long long n) {
        if(x == 0) return 0;
        if(n == 1) return x;
        if(n == 0) return 1;
        if(n <  0) return 1/(myPow(x,-(n)));
        return x * myPow(x,n-1);
    }
};
