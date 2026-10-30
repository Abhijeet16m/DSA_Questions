class Solution {
  public:
    int getCount(vector<int> &arr, int x, int y) {
        int i = 0;
        while(i < arr.size()){
            if(arr[i] == x) break;
            i++;
        }
        if(i == arr.size()) return -1;
        int j = arr.size()-1;
        while(j >= 0 && (arr[j] != y)){
            j--;
        }
        if(j < 0) return -1;
        return j-i-1;
    }
};