class Solution {
public:
    vector<int> dp;
    int helper(vector<int> &nums, int n){
        if(n >= nums.size()) return 0;
        if(dp[n] != -1) return dp[n];
        dp[n] = nums[n] + max(helper(nums, n+2), helper(nums, n+3));
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n+1, -1);
        return max(helper(nums, 0), helper(nums, 1));
    }
};