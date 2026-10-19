class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int l = INT_MIN;
        int s = INT_MIN;
        for(int i: arr){
            if(i > l){
                s = l;
                l = i;
            }
            if(i > s && i < l){
                s = i;
            }
        }
        if(s == INT_MIN) return -1;
        return s;
    }
};