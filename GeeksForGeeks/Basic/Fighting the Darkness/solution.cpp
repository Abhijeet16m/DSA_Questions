class Solution {
  public:
    int maxDays(vector<int> &arr) {
        int ans = INT_MIN;
        for(int i: arr){
            if(i > ans) ans = i;
        }
        return ans;
    }
};