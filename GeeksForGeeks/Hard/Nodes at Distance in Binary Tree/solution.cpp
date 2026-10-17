/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    map<int, vector<int>> mp;
    void helper(Node *root){
        if(!root) return;
        if(root->left){
            mp[root->data].push_back((root->left)->data);
            mp[(root->left)->data].push_back(root->data);
            helper(root->left);
        }
        if(root->right){
            mp[root->data].push_back((root->right)->data);
            mp[(root->right)->data].push_back(root->data);
            helper(root->right);
        }
    }
    vector<int> kDistanceNodes(Node* root, int target, int k) {
        queue<int> q;
        vector<int> ans;
        map<int, int> seen;
        mp.clear();
        
        
        helper(root);
        
        
        // bfs
        q.push(target);
        seen[target] = 1;
        
        while(k > 0 && !q.empty()){
            int sz = q.size();
            for(int i = 0 ; i < sz ; i++){
                int curr = q.front();
                q.pop();
                for(int i: mp[curr]){
                    if(seen[i] == 0){
                        q.push(i);
                        seen[i]++;
                    }
                }
            }
            k--;
        }
        
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        
        sort(ans.begin(),ans.end());
    return ans;
    }
};