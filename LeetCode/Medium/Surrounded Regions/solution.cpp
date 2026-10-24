class Solution {
public:
    void helper(vector<vector<char>> &board, int r, int c){
        if(r < 0 || c < 0 || r >= board.size() || c >= board[0].size()) return;
        if(board[r][c] != 'O') return;
        board[r][c] = '-';
        helper(board, r+1, c);
        helper(board, r-1, c);
        helper(board, r, c+1);
        helper(board, r, c-1);
    }
    void solve(vector<vector<char>>& board) {
        vector<pair<int, int>> boundry;
        int m = board.size(), n = board[0].size();
        for(int i = 0; i < n; i++){
            if(board[0][i] == 'O') boundry.push_back({0, i});
            if(board[m-1][i] == 'O') boundry.push_back({m-1, i});
        }
        for(int i = 1; i < m-1; i++){
            if(board[i][0] == 'O') boundry.push_back({i, 0});
            if(board[i][n-1] == 'O') boundry.push_back({i, n-1});
        }
        for(auto i: boundry){
            helper(board, i.first, i.second);
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == '-') board[i][j] = 'O';
                else if(board[i][j] == 'O') board[i][j] = 'X';
            }
        }
    }
};