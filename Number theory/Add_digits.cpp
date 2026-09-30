class Solution {
public:
    int addDigits(int num) {
        int n = num;

        while(1){
            int a = n, sum = 0;

            while(a){
                sum += (a % 10);
                a /= 10;
            }

            n = sum;

            if(n / 10 < 1) return n;
        }
    }
};