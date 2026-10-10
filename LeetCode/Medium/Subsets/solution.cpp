class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;
    void helper(vector<int> &nums, int i, int n){
        if(i == n){
            res.push_back(temp);
            return;
        }
        helper(nums, i+1, n);
        temp.push_back(nums[i]);
        helper(nums, i+1, n);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        helper(nums, 0, nums.size());
        return res;
    }
};