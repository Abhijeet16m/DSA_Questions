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
    vector<string> paths;
    void helper(TreeNode* root, string currPath){
        if(!root) return;
        if(!root->left && !root->right){
            currPath += to_string(root->val);
            paths.push_back(currPath);
            return;
        }
        currPath += to_string(root->val);
        currPath += "->";
        if(root->left){
            helper(root->left, currPath);
        }
        if(root->right){
            helper(root->right, currPath);
        }   
        currPath.pop_back();
        currPath.pop_back();
        currPath.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        paths.clear();
        helper(root, "");
        return paths;
    }
};