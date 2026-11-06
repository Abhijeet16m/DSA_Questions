class Solution {
public:
    vector<int> dp;
    int helper(int i, int n, vector<int> &nums){
        if(i >= n) return 1e8; 
        if(dp[i] != -1) return dp[i];
        int temp = 1e8;
        for(int j = 1; j <= nums[i]; j++){
            if(i+j >= n) break;
            temp = min(temp, helper(i+j, n, nums));
        }
        return dp[i] = temp+1;
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n, -1);
        dp[n-1] = 0;
        return helper(0, n, nums);
    }
};