class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size(), mx = 0;

        vector<vector<int>> dp(n, vector<int>(m));

        for(int i = 0; i < n; i++) {
            dp[i][0] = (matrix[i][0] - '0');
            mx = max(mx, dp[i][0]);
        }

        for(int i = 0; i < m; i++) {
            dp[0][i] = (matrix[0][i] - '0');
            mx = max(mx, dp[0][i]);
        }

        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][j] == '0') {
                    dp[i][j] = 0;
                    continue;
                }
                dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});

                mx = max(mx , dp[i][j]);
            }
        }

        return (mx * mx);
    }
};