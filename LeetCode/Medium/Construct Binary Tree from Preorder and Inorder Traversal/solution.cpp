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
    TreeNode* helper(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd){
        if(preStart > preEnd) return nullptr;
        if(preStart == preEnd) return new TreeNode(preorder[preStart]);
        TreeNode *root = new TreeNode(preorder[preStart]);
        int index = -1;
        for(int i = inStart; i <= inEnd; i++){
            if(inorder[i] == preorder[preStart]){
                index = i;
                break;
            }
        }
        int nPS, nPE, nIS, nIE;
        nIS = inStart;
        nIE = index-1;
        nPS = preStart+1;
        nPE = nPS + (nIE-nIS);
        root->left = helper(preorder, nPS, nPE, inorder, nIS, nIE);
        nIS = index+1;
        nIE = inEnd;
        nPS = nPE+1;
        nPE = preEnd;
        root->right = helper(preorder, nPS, nPE, inorder, nIS, nIE);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1);
    }
};