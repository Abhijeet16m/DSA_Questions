class Solution {
public:
    vector<int> seen;
    bool helper(vector<vector<int>> &graph, int source, int color, int par){
        seen[source] = color;
        for(auto z: graph[source]){
            if(seen[z] == -1){
                if(helper(graph, z, 1-color, source)) return true;
            }
            else{
                if(z != par && seen[z] == color) return true;
            }
        }
        return false;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        seen.resize(n, -1);
        for(int i = 0; i < n; i++){
            if(seen[i] == -1){
                if(helper(graph, i, 0, -1)) return false;
            }
        }
        return true;
    }
};