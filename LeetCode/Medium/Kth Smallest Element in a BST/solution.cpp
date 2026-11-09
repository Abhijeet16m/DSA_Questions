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
    int helper(TreeNode* root, int &k){
        if(!root) return -1;
        int left = helper(root->left, k);
        if(left != -1) return left;
        if(k == 1) return root->val;
        k--;
        int right = helper(root->right, k);
        if(right != -1) return right;
        return -1;
    }
    int kthSmallest(TreeNode* root, int k) {
        return helper(root, k);
    }
};