class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, vector<int>> mp;
        for(auto i: edges){
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        for(auto i: mp){
            if(i.second.size() == edges.size()) return i.first;
        }
        return -1;
    }
};