class Solution {
public:
    void helper(vector<vector<int>> &matrix, int &i, int top, int bottom, int left, int right){
        for(int _ = left; _ <= right; _++){
            matrix[top][_] = i;
            i++;
        }
        for(int _ = top+1; _ < bottom; _++){
            matrix[_][right] = i;
            i++;
        }
        for(int _ = right; _ > left; _--){
            matrix[bottom][_] = i;
            i++;
        }
        for(int _ = bottom; _ > top; _--){
            matrix[_][left] = i;
            i++;
        }
    }
    vector<vector<int>> generateMatrix(int n) {
        int top = 0, left = 0, bottom = n-1, right = n-1;
        vector<vector<int>> res(n, vector<int>(n));
        int i = 1;
        while(top <= bottom && left <= right){
            helper(res, i, top, bottom, left, right);
            top++;
            left++;
            bottom--;
            right--;
        }
        return res;
    }
};