class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int> a;
        int n = matrix.size(), x = 0;

        for(auto i : matrix){
            for(auto j : i) a.push_back(j);
        }

        for(int i = n-1; i >= 0; i--){
            for(int j = 0; j < n; j++) {
                matrix[j][i] = a[x];
                x++;
            }
        }
    }
};