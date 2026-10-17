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
    map<int, vector<int>> mp;
    void helper(TreeNode *root){
        if(!root) return;
        if(root->left){
            mp[root->val].push_back(root->left->val);
            mp[root->left->val].push_back(root->val);
            helper(root->left);
        }
        if(root->right){
            mp[root->val].push_back(root->right->val);
            mp[root->right->val].push_back(root->val);
            helper(root->right);
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        mp.clear();
        helper(root);
        queue<int> q;
        map<int, int> seen;
        q.push(target->val);
        seen[target->val]++;
        while(k-- && !q.empty()){
            int z = q.size();
            for(int i = 0; i < z; i++){
                int temp = q.front();
                q.pop();
                for(int j: mp[temp]){
                    if(seen[j] == 0){
                        seen[j]++;
                        q.push(j);
                    }
                }
            }
        }
        vector<int> res;
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        return res;
    }
};