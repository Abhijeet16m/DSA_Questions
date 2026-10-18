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
    bool helper(TreeNode* r1, TreeNode* r2){
        if(!r1 && !r2) return true;
        if(!r1 || !r2) return false;
        if(!helper(r1->left, r2->right)) return false;
        if(!helper(r2->left, r1->right)) return false;
        return r1->val == r2->val;
    }
    bool isSymmetric(TreeNode* root) {
        if(root->left && root->right) return helper(root->left, root->right);
        if(!root->left && !root->right) return true;
        return false;
    }
};