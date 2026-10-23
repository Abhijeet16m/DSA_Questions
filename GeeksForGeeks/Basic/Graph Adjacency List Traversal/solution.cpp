class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        vector<vector<int>> res(V);
        
        for(auto i: edges){
            res[i.first].push_back(i.second);
            res[i.second].push_back(i.first);
        }
        return res;
    }
};