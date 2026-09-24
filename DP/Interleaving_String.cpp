class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int x = s1.size(), y = s2.size(), z = s3.size();

        if(x + y != z) return 0;

        vector<vector<bool>> dp(x + 1, vector<bool>(y + 1, 0));
        dp[0][0] = 1;

        for(int i = 0; i <= x; i++){
            for(int j = 0; j <= y; j++){
                if(dp[i][j]){
                    if(i < x && s1[i] == s3[i + j]) 
                        dp[i+1][j] = 1;
                    if(j < y && s2[j] == s3[i + j]) 
                        dp[i][j + 1] = 1;
                }
            }
        }

        return dp[x][y];
    }
};