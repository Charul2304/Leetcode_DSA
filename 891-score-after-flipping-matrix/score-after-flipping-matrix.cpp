class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // If first is 0, swap the string
        for(int i = 0; i < n; ++i)
            if(grid[i][0] == 0)
                for(int j = 0; j < m; ++j)
                    grid[i][j] = grid[i][j] == 0 ? 1 : 0;

        // If count of 0 > count of 1 in a column, swap the column
        for(int i = 0; i < m; ++i) {
            int col_sum = 0;
            for(int j = 0; j < n; ++j) {
                col_sum += grid[j][i];
            }
            if(col_sum <= n / 2) {
                for(int j = 0; j < n; ++j) {
                    grid[j][i] = grid[j][i] == 0 ? 1 : 0;
                }
            }
        }

        // Count the result
        int res = 0;
        for(int i = 0; i < n; ++i) {
            int temp = 0;
            for(int j = 0; j < m; ++j) {
                temp += grid[i][j] * pow(2, m - j - 1);
            }
            res += temp;
        }
        return res;
    }
};