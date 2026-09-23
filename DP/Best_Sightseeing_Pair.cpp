class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int mx = values[0] + values[1] - 1, lmx = max(values[0] , values[1] + 1);

        for(int i = 2; i < values.size(); i++){
            mx = max(mx, lmx + values[i] - i);
            lmx = max(lmx, values[i] + i);
        }

        return mx;
    }
};