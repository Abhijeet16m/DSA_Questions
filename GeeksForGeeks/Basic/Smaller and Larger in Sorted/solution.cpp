class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        vector<int> res = {0, 0};
        for(int i: arr){
            if(i > target){
                res[1]++;
            }
            else if(i < target){
                res[0]++;
            }
            else{
                res[1]++;
                res[0]++;
            }
        }
        return res;
    }
};