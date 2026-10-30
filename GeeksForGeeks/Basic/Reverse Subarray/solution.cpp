class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        reverse(arr.begin()+l-1, arr.begin()+r);
        return arr;
    }
};