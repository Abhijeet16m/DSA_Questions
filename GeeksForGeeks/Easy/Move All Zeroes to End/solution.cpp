class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int i = 0, j = 0;
        while(j < arr.size()){
            if(arr[j] != 0){
                swap(arr[i], arr[j]);
                i++;
            }
            j++;
        }
    }
};