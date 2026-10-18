/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    map<TreeNode*, TreeNode*> parent;
    void helper(TreeNode* root){
        if(!root) return;
        if(root->left) parent[root->left] = root;
        if(root->right) parent[root->right] = root;
        helper(root->left);
        helper(root->right);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        helper(root);
        vector<TreeNode*> parQ;
        vector<TreeNode*> parP;
        TreeNode* curr = p;
        while(true){
            parP.push_back(curr);
            if(curr == root) break;
            curr = parent[curr];
        }
        curr = q;
        while(true){
            parQ.push_back(curr);
            if(curr == root) break;
            curr = parent[curr];
        }
        int i = parP.size()-1;
        int j = parQ.size()-1;
        TreeNode* last = nullptr;
        while(parP[i] == parQ[j]){
            last = parP[i];
            i--;
            j--;
            if(i<0 || j<0) break;
        }
        return last;
    }
};