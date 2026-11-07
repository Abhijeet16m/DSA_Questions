class Solution {
public:
    vector<vector<int>> dp;
    int helper(int m,int n, int x, int y, vector<vector<int>> &og){
        if(x == m-1 && y == n-1){
            return dp[x][y] = 1;
        }
        if(dp[x][y] != -1) return dp[x][y];
        int a = 0, b = 0;
        if(x+1 < m && og[x+1][y] != 1){
            a = helper(m, n, x+1, y, og);
        }
        if(y+1 < n && og[x][y+1] != 1){
            b = helper(m, n, x, y+1, og);
        }
        return dp[x][y] = a+b;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        int m = og.size(), n = og[0].size();
        if(og[0][0] == 1) return 0;
        dp.resize(m, vector<int>(n, -1));
        return helper(m, n, 0, 0, og);
    }
};