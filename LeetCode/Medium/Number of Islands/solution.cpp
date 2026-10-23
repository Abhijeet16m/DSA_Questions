class Solution {
public:
    void helper(vector<vector<char>> &grid, int i, int j){
        if(i < 0 || i >= grid.size()) return;
        if(j < 0 || j >= grid[0].size()) return;
        if(grid[i][j] == '0') return;
        grid[i][j] = '0';
        helper(grid, i-1, j);
        helper(grid, i+1, j);
        helper(grid, i, j-1);
        helper(grid, i, j+1);

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1'){
                    ans++;
                    helper(grid, i, j);
                }
            }
        }
        return ans;
    }
};