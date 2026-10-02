class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size(), cn = 0;

        unordered_map<int, int> pv;

        for(auto x : nums){
            unordered_map<int, int> cr;

            cr[x]++;

            for(auto &[gc, cnt] : pv){
                int ngc = __gcd(gc, x);
                cr[ngc] += cnt;
            }

            if(cr.count(k)) cn += cr[k];

            pv = move(cr);
        }

        return cn;
    }
};