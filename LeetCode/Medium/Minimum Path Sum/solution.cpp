class Solution {
public:
    int helper(int x, int y, int m, int n, vector<vector<int>> &dp, vector<vector<int>> &grid){
        if(x >= m || y >= n) return 1e8;
        if(x == m-1 && y == n-1) return dp[x][y] = grid[x][y];
        if(dp[x][y] != -1) return dp[x][y];
        int a = helper(x+1, y, m, n, dp, grid);
        int b = helper(x, y+1, m, n, dp, grid);
        return dp[x][y] = grid[x][y]+min(a,b);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(0, 0, m, n, dp, grid);
    }
};