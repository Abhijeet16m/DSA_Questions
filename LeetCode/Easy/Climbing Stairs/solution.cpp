class Solution {
public:
    vector<int> dp;
    int helper(int n){
        if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];
        dp[n] = helper(n-1)+helper(n-2);
        return dp[n];
    }
    int climbStairs(int n) {
        dp.resize(n+1, -1);
        dp[0] = 1;
        return helper(n);
    }
};