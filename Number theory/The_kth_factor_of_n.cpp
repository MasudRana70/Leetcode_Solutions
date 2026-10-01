class Solution {
public:
    vector<int> divisor(int n){
        vector<int> a;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                a.push_back(i);
                if(i != n/i) {
                    a.push_back(n/i);
                }
            }
        }
        return a;
    }

    int kthFactor(int n, int k) {
        vector<int> divisors = divisor(n);

        sort(divisors.begin(), divisors.end());

        if(k > divisors.size()) return -1;
        else return divisors[k-1];
    }
};class Solution {
public:
    vector<int> divisor(int n){
        vector<int> a;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                a.push_back(i);
                if(i != n/i) {
                    a.push_back(n/i);
                }
            }
        }
        return a;
    }

    int kthFactor(int n, int k) {
        vector<int> divisors = divisor(n);

        sort(divisors.begin(), divisors.end());

        if(k > divisors.size()) return -1;
        else return divisors[k-1];
    }
};