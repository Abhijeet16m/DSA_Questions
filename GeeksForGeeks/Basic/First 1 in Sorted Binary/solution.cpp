class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        int left = 0;
        int right = arr.size()-1;
        int index = -1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(arr[mid] == 1){
                right = mid - 1;
                index = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return index;
    }
};