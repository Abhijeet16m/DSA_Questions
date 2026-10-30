class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        int i = 0;
        int j = 0;
        while(j < arr.size()){
            if(arr[j]%2 == 0){
                swap(arr[i], arr[j]);
                i++;
            }
            j++;
        }
        sort(arr.begin(), arr.begin()+i);
        sort(arr.begin()+i, arr.end());
    }
};