class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, false);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                ans++;
                visited[i] = true;
                queue<int> q;
                q.push(i);
                while(!q.empty()){
                    int z = q.size();
                    for(int j = 0; j < z; j++){
                        int t = q.front();
                        visited[t] = true;
                        q.pop();
                        vector<int> temp = isConnected[t];
                        for(int k = 0; k < n; k++){
                            if(temp[k] == 1){
                                if(!visited[k]){
                                    q.push(k);
                                }
                            }
                        }
                    }
                    
                }
            }
        }
        return ans;
    }
};