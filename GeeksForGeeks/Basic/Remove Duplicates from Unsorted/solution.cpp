class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        vector<int> res;
        map<int, int> seen;
        for(int i: arr){
            if(seen[i] == 0){
                seen[i] = 1;
                res.push_back(i);
            }
        }
        return res;
    }
};