class Solution {
public:
    vector<int> res;
    void helper(int top, int bottom, int left, int right, vector<vector<int>>& matrix){
        if(top == bottom){
            for(int i = left; i <= right; i++){
                res.push_back(matrix[top][i]);
            }
            return;
        }
        if(left == right){
            for(int i = top; i <= bottom; i++){
                res.push_back(matrix[i][left]);
            }
            return;
        }
        for(int i = left; i < right; i++){
            res.push_back(matrix[top][i]);
        }
        for(int i = top; i < bottom; i++){
            res.push_back(matrix[i][right]);
        }
        for(int i = right; i > left; i--){
            res.push_back(matrix[bottom][i]);
        }
        for(int i = bottom; i > top; i--){
            res.push_back(matrix[i][left]);
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        res.clear();
        int m = matrix.size(); 
        int n = matrix[0].size();
        int top = 0;
        int left = 0;
        int bottom = m-1;
        int right = n-1;
        while(top <= bottom && left <= right){
            helper(top, bottom, left, right, matrix);
            top++;
            left++;
            right--;
            bottom--;
        }
        return res;
    }
};