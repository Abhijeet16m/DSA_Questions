class Solution {
  public:
    void sumArray(vector<int> &arr) {
        int total = 0;
        for(int i: arr) total+=i;
        for(int i = 0; i < arr.size(); i++){
            arr[i] = total-arr[i];
        }
    }
};