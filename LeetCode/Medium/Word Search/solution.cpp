class Solution {
public:
    bool canGo(int x, int y, int prevX, int prevY, int row, int col){
        if(x < 0 || x >= row){
            return false;
        }
        if(y < 0 || y >= col){
            return false;
        }
        if(x == prevX && y == prevY) return false;
        return true;
    }
    bool helper(vector<vector<char>> &board, string word, int x, int y, int prevX, int prevY, int index, int row, int col){
        if(index == word.size()) return true;
        char curr = board[x][y];
        board[x][y] = '#';
        if(canGo(x-1, y, prevX, prevY, row, col)){
            if(board[x-1][y] == word[index]){
                if(helper(board, word, x-1, y, x, y, index+1, row, col)) return true;
            }
        }
        if(canGo(x, y+1, prevX, prevY, row, col)){
            if(board[x][y+1] == word[index]){
                if(helper(board, word, x, y+1, x, y, index+1, row, col)) return true;
            }
        }
        if(canGo(x+1, y, prevX, prevY, row, col)){
            if(board[x+1][y] == word[index]){
                if(helper(board, word, x+1, y, x, y, index+1, row, col)) return true;
            }
        }
        if(canGo(x, y-1, prevX, prevY, row, col)){
            if(board[x][y-1] == word[index]){
                if(helper(board, word, x, y-1, x, y, index+1, row, col)) return true;
            }
        }
        board[x][y] = curr;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        if(word.size() > row*col) return false;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(board[i][j] == word[0]){
                    char curr = board[i][j];
                    board[i][j] = '#';
                    if(helper(board, word, i, j, -1, -1, 1, row, col)) return true;
                    board[i][j] = curr;
                }
            }
        }
        return false;
    }
};