class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        unordered_map<int, vector<int>> mp;
        for(auto i: edges){
            int x = i[0], y = i[1];
            mp[x].push_back(y);
            mp[y].push_back(x);
        }
        vector<bool> seen(n+1, false); 
        queue<int> q;
        q.push(source);
        seen[source] = true;
        while(!q.empty()){
            int z = q.size();
            for(int i = 0; i < z; i++){
                int t = q.front();
                q.pop();
                if(t == destination) return true;
                for(int j: mp[t]){
                    if(seen[j] == false){
                        seen[j] = true;
                        q.push(j);
                    }
                }
            }
        }
        return false;
    }
};