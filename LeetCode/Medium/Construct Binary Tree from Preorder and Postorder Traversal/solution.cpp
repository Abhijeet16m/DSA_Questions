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
    TreeNode* helper(vector<int> &pre, int a, int b, vector<int> &post, int x, int y){
        if(a > b || x > y) return nullptr;
        if(a == b || x == y) return new TreeNode(pre[a]);
        TreeNode* root = new TreeNode(pre[a]);
        if(a+1 == pre.size()) return nullptr;
        int index = mp[pre[a+1]];
        root->left = helper(pre, a+1, a+(index-x+1), post, x, index);
        root->right = helper(pre, a+index-x+2, b, post, index+1, y-1);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        for(int i = 0; i < postorder.size(); i++){
            mp[postorder[i]] = i;
        }
        return helper(preorder, 0, preorder.size()-1, postorder, 0, postorder.size()-1);
    }
};