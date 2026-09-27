class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans = 0;
        int n = sequence.size(), m = word.size();

        for(int i = 0; i <= n - m; i++) {
            int cnt = 0;
            int j = i;

            while(j + m <= n && sequence.substr(j, m) == word) {
                cnt++;
                j += m;
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
};