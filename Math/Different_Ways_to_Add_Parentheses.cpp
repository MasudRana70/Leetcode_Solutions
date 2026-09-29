class Solution {
public:
    vector<int> sol(string s){
        vector<int> a;
        int n = s.size();

        for(int i = 0; i < n; i++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*'){
                vector<int> l = sol(s.substr(0, i));
                vector<int> r = sol(s.substr(i + 1, n - (i + 1)));

                for(auto x : l){
                    for(auto y : r){
                        if(s[i] == '+') a.push_back(x + y);
                        else if(s[i] == '-') a.push_back(x - y);
                        else a.push_back(x * y);
                    }
                }
            }
        }

        if(a.empty()) {
            int val = stoi(s);
            a.push_back(val);

            return a;
        }

        return a;
    }

    vector<int> diffWaysToCompute(string expression) {
        return sol(expression);
    }
};