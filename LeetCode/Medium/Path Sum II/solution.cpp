/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> res;
  
    vector<int> temp;
    int currSum = 0;
    void helper(TreeNode* root, int target){
        if(!root){
            if(currSum == target){
                res.push_back(temp);
            }
            return;
        }
        if(!root->left && !root->right){
            temp.push_back(root->val);
            currSum += root->val;
            if(currSum == target){
                res.push_back(temp);
            }
            temp.pop_back();
            currSum -= root->val;
            return;
        }
        temp.push_back(root->val);
        currSum+=root->val;
        if(root->left) helper(root->left, target);
        if(root->right) helper(root->right, target);
        temp.pop_back();
        currSum-=root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return {};
        res.clear();
        temp.clear();
        helper(root, targetSum);
        return res;
    }
};