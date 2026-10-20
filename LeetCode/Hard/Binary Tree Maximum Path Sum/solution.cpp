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
    int pathSum = INT_MIN;
    int helper(TreeNode* root){
        if(!root) return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        int temp = root->val;
        if(left >= 0) temp+= left;
        if(right >= 0) temp+= right;
        pathSum = max(pathSum, temp);
        if(left < 0 && right < 0) return root->val;
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        pathSum = INT_MIN;
        int temp = helper(root);
        return pathSum;
    }
};