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
    int res = 0;
    int currNum = 0;
    void helper(TreeNode* root){
        if(!root) return;
        currNum = currNum*10 + root->val;
        if(!root->left && !root->right){
            res += currNum;
            return;
        }
        if(root->left){
            helper(root->left);
            currNum/=10;
        } 
        if(root->right){
            helper(root->right);
            currNum/=10;
        }
    }
    int sumNumbers(TreeNode* root) {
        res = 0;
        currNum = 0;
        helper(root);
        return res;      
    }
};