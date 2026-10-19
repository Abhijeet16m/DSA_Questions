class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        unordered_map<int, int> prefix;
        prefix[-1] = 0;
        for(int i = 0; i < n; i++){
            prefix[i] = prefix[i-1]+arr[i];
        }
        prefix[n] = prefix[n-1];
        for(int i = 0; i < n; i++){
            if(prefix[i-1] == prefix[n]-prefix[i]) return i;
        }
        return -1;
    }
};