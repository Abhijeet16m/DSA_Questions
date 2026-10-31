class Solution {
  public:
    vector<int> distDigit(vector<int>& arr) {
        map<int, int> mp;
        for(int i: arr){
            while(i != 0){
                mp[i%10]++;
                i/=10;
            }
        }
        vector<int> v;
        for(auto i: mp){
            v.push_back(i.first);
        }
        return v;
    }
};