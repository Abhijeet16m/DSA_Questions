class Solution {
  public:
    int findSum(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i: arr) mp[i]++;
        int res = 0;
        for(auto i: mp){
            res += i.first;
        }
        return res;
    }
};