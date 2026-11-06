class Solution {
public:
    vector<bool> seen;
    set<vector<int>> res;
    vector<int> temp;
    void helper(int x, vector<int> &nums, int n){
        if(x == n){
            res.insert(temp);
        }
        for(int i = 0; i < n; i++){
            if(!seen[i]){
                seen[i] = true;
                temp.push_back(nums[i]);
                helper(x+1, nums, n);
                temp.pop_back();
                seen[i] = false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        seen.resize(n, false);
        helper(0, nums, n);
        vector<vector<int>> ans;
        for(auto i: res){
            ans.push_back(i);
        }
        return ans;
    }
};