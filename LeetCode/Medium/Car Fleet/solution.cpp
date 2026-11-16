class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[position[i]] = speed[i];
        }
        sort(position.begin(), position.end(), greater<int>());
        int fleet = 0;
        double pre = INT_MIN;
        for(int i = 0; i < n; i++){
            double time = (double)(target-position[i])/mp[position[i]];
            if(time > pre){
                fleet++;
                pre = time;
            }
        }
        return fleet;
    }
};