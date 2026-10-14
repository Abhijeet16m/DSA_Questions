class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> mp;
        int maxVal = INT_MIN;
        for(int i: nums){
            mp[i]++;
            maxVal = max(maxVal, i);
        }
        if(maxVal <= 0) return 1;
        for(int i = 1; i < maxVal; i++){
            if(mp[i] == 0) return i;
        }
        long long int res = maxVal;
        return res+1;
    }
};