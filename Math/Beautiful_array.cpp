class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> a{1};

        while(a.size() < n){
            vector<int> b;

            for(auto i : a){
                i = 2 * i - 1;
                if(i <= n) b.push_back(i);
            }

            for(auto i : a){
                i = 2 * i;
                if(i <= n) b.push_back(i);
            }

            a = b;
        }

        return a;
    }
};