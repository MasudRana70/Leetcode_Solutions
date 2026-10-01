class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v;
        map<double, int> mp;

        for(int i = 1; i < n; i++){
            for(int j = 1; j <= n; j++){
                double b = i, c = j;
                double val = b / c;
                if(val > 0 && val < 1 && mp[val] == 0) {
                    string s = "";
                    s += to_string(i);
                    s += "/";
                    s += to_string(j);

                    v.push_back(s);
                    mp[val] = 1;
                }
            }
        }

        return v;
    }
};