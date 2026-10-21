class Solution {
  public:
    int coin(vector<int>& arr) {
        int res = arr[0];
        for(int i: arr){
            res = min(i, res);
        }
        return res;
    }
};