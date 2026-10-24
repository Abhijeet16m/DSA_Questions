class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(0);
        visited[0] = true;
        int nonVisitedRooms = n-1;
        while(!q.empty() && nonVisitedRooms>0){
            int t = q.front();
            q.pop();
            for(int i: rooms[t]){
                if(visited[i] == false){
                    visited[i] = true;
                    q.push(i);
                    nonVisitedRooms--;
                }
            }
        }
        return nonVisitedRooms<=0;
    }
};