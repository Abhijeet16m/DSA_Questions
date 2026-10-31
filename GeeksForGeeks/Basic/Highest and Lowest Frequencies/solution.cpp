class Solution {
  public:
    int findDiff(vector<int>& arr) {
        map<int, int> mp;
        for(int i: arr) mp[i]++;
        int a = INT_MIN;
        int b = INT_MAX;
        for(auto i: mp){
            int x = i.second;
            if(x > a) a = x;
            if(x < b) b = x;
        }
        return abs(a-b);
    }
};