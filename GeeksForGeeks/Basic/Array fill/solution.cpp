class Solution {
  public:
    void fillArray(vector<int> &arr, int k) {
        for(int i = 0; i < arr.size(); i++){
            arr[i] = k;
        }
    }
};