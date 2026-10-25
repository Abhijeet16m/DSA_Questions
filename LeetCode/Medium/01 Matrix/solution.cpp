class Solution {
public:
    inline bool canGo(vector<vector<int>>& mat, int r, int c, map<pair<int, int>, bool> &seen){
        return r >= 0 && c >= 0
                && r < mat.size() && c < mat[0].size()
                && seen[{r, c}] == false;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        map<pair<int, int>, bool> seen;
        queue<pair<int, int>> q;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0){
                    seen[{i, j}] = true;
                    q.push({i, j});
                }
            }
        }       
        int step = 0;
        while(!q.empty()){
            int z = q.size();
            for(int i = 0; i < z; i++){
                auto [x, y] = q.front();
                q.pop();
                mat[x][y] = step;
                int r[] = {0, 0, 1, -1};
                int c[] = {1, -1, 0, 0};
                for(int j = 0; j < 4; j++){
                    int a = r[j], b = c[j];
                    if(canGo(mat, x+a, y+b, seen)){
                        seen[{x + a, y + b}] = true;
                        q.push({x + a, y + b});
                    } 
                }
            }
            step++;
        }
        return mat;
    }
};