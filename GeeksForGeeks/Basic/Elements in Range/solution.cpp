class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        map<int, int> mp;
        for(int i: arr) mp[i]++;
        for(int i = start; i <= end; i++){
            if(mp[i] == 0) return false;
        }
        return true;
    }
};
