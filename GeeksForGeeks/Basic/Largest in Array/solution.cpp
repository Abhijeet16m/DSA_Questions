class Solution {
  public:
    int largest(vector<int> &arr) {
        int res = INT_MIN;
        for(int i: arr){
            res = max(res, i);
        }
        return res;
        
    }
};
