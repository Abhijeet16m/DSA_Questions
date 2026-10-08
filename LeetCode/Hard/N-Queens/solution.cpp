class Solution {
    vector<vector<string>> res;
    vector<string> board;
public:
    bool canPlace(int i, int j, int n){
        for(int x = 0; x < n; x++){
            if(x == i) continue;
            if(board[x][j] == 'Q') return false;  
        }
        for(int x = 0; x < n; x++){
            if(x == j) continue;
            if(board[i][x] == 'Q') return false;  
        }
        int p1 = i-1, p2 = j-1;
        while(p1 >= 0 && p2 >= 0){
            if(board[p1][p2] == 'Q') return false;
            p1--;
            p2--;
        }
        p1 = i+1, p2 = j+1;
        while(p1 < n && p2 < n){
            if(board[p1][p2] == 'Q') return false;
            p1++;
            p2++;
        }
        p1 = i-1, p2 = j+1;
        while(p1 >= 0 && p2 < n){
            if(board[p1][p2] == 'Q') return false;
            p1--;
            p2++;
        }
        p1 = i+1, p2 = j-1;
        while(p1 < n && p2 >= 0){
            if(board[p1][p2] == 'Q') return false;
            p1++;
            p2--;
        }
        return true;
    }
    void helper(int x, int n){
        if(x == n){
            res.push_back(board);
            return;
        }
        for(int i = 0; i < n; i++){
            if(canPlace(x, i, n)){
                board[x][i] = 'Q';
                helper(x+1, n);
                board[x][i] = '.';
            };
        }   
    }
    vector<vector<string>> solveNQueens(int n) {
        string temp = "";
        for(int i = 0; i < n; i++){
            temp += '.';
        }
        board.resize(n, temp);
        helper(0, n);
        return res;
    }
};