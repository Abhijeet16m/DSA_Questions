class Solution {
public:
    void helper(vector<vector<int>> &res, int sr, int sc, int color, int m, int n, int main){
        if(sr < 0 || sr >= m || sc < 0 || sc >= n) return;
        if(res[sr][sc] != main) return;
        res[sr][sc] = color;
        helper(res, sr+1, sc, color, m, n, main);
        helper(res, sr-1, sc, color, m, n, main);
        helper(res, sr, sc+1, color, m, n, main);
        helper(res, sr, sc-1, color, m, n, main);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size(), n = image[0].size();
        if(image[sr][sc] == color) return image;
        helper(image, sr, sc, color, m, n, image[sr][sc]);
        return image;
    }
};