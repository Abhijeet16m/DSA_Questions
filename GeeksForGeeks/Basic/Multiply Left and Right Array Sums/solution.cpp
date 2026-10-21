class Solution {
  public:
    int multiply(vector<int> &arr) {
        int l = 0, r = 0;
        int mid = arr.size()/2;
        for(int i = 0; i < mid; i++){
            l += arr[i];
        }
        for(int i = mid; i < arr.size(); i++){
            r += arr[i];
        }
        return l*r;
    }
};