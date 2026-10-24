class Solution {
public:
    void helper(vector<vector<int>>& grid, int r, int c){
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size()) return;
        if(grid[r][c] == 0) return;
        grid[r][c] = 0;
        helper(grid, r+1, c);
        helper(grid, r-1, c);
        helper(grid, r, c+1);
        helper(grid, r, c-1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<pair<int, int>> boundry;
        for(int i = 0; i < n; i++){
            if(grid[0][i] == 1) boundry.push_back({0, i});
            if(grid[m-1][i] == 1) boundry.push_back({m-1, i});
        }
        for(int i = 0; i < m; i++){
            if(grid[i][0] == 1) boundry.push_back({i, 0});
            if(grid[i][n-1] == 1) boundry.push_back({i, n-1});
        }
        for(auto i: boundry){
            helper(grid, i.first, i.second);
        }
        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1) count++;
            }
        }
        return count;
    }
};