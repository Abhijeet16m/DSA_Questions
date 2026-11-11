class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> mp;
        mp[0] = -1;
        int curr = 0;
        int maxLength = 0;
        for(int x = 0; x < nums.size(); x++){
            if(nums[x] == 1) curr++;
            else curr--;
            if(mp.count(curr) == 1){
                maxLength = max(maxLength, x-mp[curr]);
            }else{
                mp[curr] = x;
            } 
        }     
        return maxLength;  
    }
};
