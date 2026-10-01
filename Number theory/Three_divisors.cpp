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
    bool isThree(int n) {
        vector<int> div = divisor(n);

        if(div.size() == 3) return 1;
        else return 0;
    }
};