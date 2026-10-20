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
    map<int, int> mp;
    TreeNode* helper(vector<int> & inorder, int a, int b, vector<int> &postorder, int x, int y){
        if(a > b || x > y) return nullptr;
        TreeNode* root = new TreeNode(postorder[y]);
        int index = mp[root->val];
        int e = index-a;
        root->left = helper(inorder, a, index-1, postorder, x, x+e-1);
        root->right = helper(inorder, index+1, b, postorder, x+e, y-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        return helper(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);
    }
};