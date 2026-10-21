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
    TreeNode* ans = new TreeNode();
    TreeNode* curr = ans;
    void helper(TreeNode* root){
        if(!root) return;
        curr->right = new TreeNode(root->val);
        curr = curr->right;
        helper(root->left);
        helper(root->right);
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        helper(root);
        root->left = nullptr;
        if(ans->right){
            root->right = ans->right->right;
        }
    }
};