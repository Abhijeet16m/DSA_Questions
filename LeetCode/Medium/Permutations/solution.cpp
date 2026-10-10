class Solution {
public:
    map<int, int> seen;
    vector<vector<int>> res;
    vector<int> temp;
    void helper(vector<int> &nums, int x, int n){
        if(x == n){
            res.push_back(temp);
            return;
        }
        for(int i = 0; i < n; i++){
            if(seen[nums[i]] == 0){
                seen[nums[i]]++;
                temp.push_back(nums[i]);
                helper(nums, x+1, n);
                temp.pop_back();
                seen[nums[i]]--;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums, 0, nums.size());
        return res;
    }
};