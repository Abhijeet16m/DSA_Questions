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
    vector<int> inorder;
    void helper(TreeNode* root){
        if(!root) return;
        helper(root->left);
        inorder.push_back(root->val);
        helper(root->right);
    }

    TreeNode* create(vector<int> inorder){
        TreeNode* root = new TreeNode();
        TreeNode* curr = root;
        for(int i: inorder){
            curr->right = new TreeNode(i);
            curr = curr->right;
        }
        return root->right;
    }
    TreeNode* increasingBST(TreeNode* root) {
        helper(root);
        return create(inorder);
    }
};