class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i: arr) mp[i]++;
        vector<int> res;
        for(auto i: mp){
            if(i.second == 2) res.push_back(i.first);
        }
        return res;
    }
};