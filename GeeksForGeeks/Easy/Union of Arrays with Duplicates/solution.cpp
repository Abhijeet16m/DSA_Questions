class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> s;
        for(int i: a) s.emplace(i);
        for(int i: b) s.emplace(i);
        vector<int> res;
        for(int i: s){
            res.push_back(i);
        }
        return res;
    }
};