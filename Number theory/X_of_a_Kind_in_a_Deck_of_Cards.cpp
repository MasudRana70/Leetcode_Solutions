class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> m;

        for(int i = 0; i < deck.size(); i++) m[deck[i]]++;

        int gc = m[deck[0]];

        for(auto [k, cn]: m){
            gc = __gcd(cn, gc);
        }

        if(gc <= 1) return 0;
        else return 1;
    }
};