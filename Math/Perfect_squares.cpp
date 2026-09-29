class Solution {
public:
    int sol(int n, vector<int> &dp, vector<int> &pq){
        if(n == 0) return 0;

        if(dp[n] != -1) return dp[n];

        int val = n;

        for(auto x : pq){
            if(x > n) break;

            val = min(val, 1 + sol(n - x, dp, pq));
        }

        return dp[n] = val;
    }

    int numSquares(int n) {
        vector<int> pq, dp(n + 1, -1);

        for(int i = 1; i<= 100; i++) pq.push_back(i * i);

        return sol(n, dp, pq);
    }
};