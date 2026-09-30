class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans;
        map<int, int> mp;
        int mx = nums[0];

        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
            mx = max(mx, nums[i]);
        }

        while(1){
            int cn = 0;
            vector<int> a;

            for(int i = 1; i <= mx; i++) {
                if(mp[i]) {
                    a.push_back(i);
                    mp[i]--;
                }
                else cn++;
            }

            if(cn >= mx) break;
            
            for(int i = 0; i < a.size(); i++) ans.push_back(a[i]);
        }

        return ans;
    }
};