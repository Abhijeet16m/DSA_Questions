class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        int i = arr.size()-1;
        int j = arr.size()-2;
        while(j >= 0){
            if(arr[j] == arr[i]) return {i, arr[i]};
            i--;
            j--;
        }
        return {-1, -1};
    }
};