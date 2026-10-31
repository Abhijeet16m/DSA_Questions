class Solution {
  public:
    int specialIntegers(vector<int> &arr) {
        map<int, int> mp;
        for(int i: arr) mp[i]++;
        int count = 0;
        for(auto i: mp){
            if(mp.count(i.first-1) != 0 && mp.count(i.first+1) != 0) count++;
        }
        return count;
    }
};