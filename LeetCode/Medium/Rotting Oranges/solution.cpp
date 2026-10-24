
class Solution {
public:
    bool canGo(vector<vector<int>> &grid, int r, int c){
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size()) return false;
        return grid[r][c] == 1;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size();
        queue<pair<int, int>> q;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2) q.push({i, j});
            }
        }
        int time = 0;
        while(!q.empty()){
            int z = q.size();
            for(int i = 0; i < z; i++){
                auto [r, c] = q.front();
                q.pop();
                if(canGo(grid, r+1, c)){
                    grid[r+1][c] = 2;
                    q.push({r+1, c});
                }
                if(canGo(grid, r-1, c)){
                    grid[r-1][c] = 2;
                    q.push({r-1, c});
                }
                if(canGo(grid, r, c+1)){
                    grid[r][c+1] = 2;
                    q.push({r, c+1});
                }
                if(canGo(grid, r, c-1)){
                    grid[r][c-1] = 2;
                    q.push({r, c-1});
                }
            }
            if(!q.empty()) time++;
        }
        for(int i = 0; i < m; i++){
            for(int j = 0;  j < n; j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        return time;
    }
};