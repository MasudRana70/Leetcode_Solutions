class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int mx = values[0] + values[1] - 1;

        map<int, vector<pair<int, int>>> mp;
        mp[values[0]].push_back({values[0], 0});
        mp[values[1] + 1].push_back({values[1],  1});

        for(int i = 2; i < values.size(); i++){
            auto it = prev(mp.end());

            mx = max(mx, it->first + values[i] - i);
            mp[values[i] + i].push_back({values[i], i});
        }

        return mx;
    }
};