class Solution {
public:
    double myPow(double x, int n) {
        long long p = n;

        if(p < 0){
            x = (1 / x);
            p *= (-1);
        }

        double ans = 1;

        while(p){
            if((p & 1)){
                ans *= x;
            }

            x *= x;
            p /= 2;
        }

        return ans;
    }
};