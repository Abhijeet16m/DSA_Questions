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
    int maxVal = INT_MIN;
    void helper(TreeNode* root){
        if(!root) return;
        mp[root->val]++;
        maxVal = max(maxVal, mp[root->val]);
        helper(root->left);
        helper(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        helper(root);
        vector<int> res;
        for(auto i: mp){
            if(i.second == maxVal) res.push_back(i.first);
        }
        return res;
    }
};