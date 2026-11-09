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
class BSTIterator {
    vector<int> inorder;
    int i;
    int n;
    void helper(TreeNode* root){
        if(!root) return;
        helper(root->left);
        inorder.push_back(root->val);
        helper(root->right);
    }
public:
    BSTIterator(TreeNode* root) {
        helper(root);
        i = 0;
        n = inorder.size();
    }
    int next() {
        i++;
        return inorder[i-1];
    }
    
    bool hasNext() {
        return i < n;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */