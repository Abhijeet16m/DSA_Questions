class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;
    int currSum = 0;
    void helper(vector<int> &candidates, int target, int start){
        if(currSum == target){
            res.push_back(temp);
            return;
        }
        if(currSum > target){
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            currSum += candidates[i];
            temp.push_back(candidates[i]);
            helper(candidates, target, i);
            currSum -= candidates[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        helper(candidates, target, 0);
        return res;
    }
};