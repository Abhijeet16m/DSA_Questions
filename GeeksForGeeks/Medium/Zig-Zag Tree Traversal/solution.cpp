/* Structure of Binary Tree Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    queue<Node*> q;
    vector<vector<int>> res;
    vector<int> v;
    vector<int> zigZagTraversal(Node* root) {
        res.clear();
        bool rev = false;
        if(root){
            q.push(root);
        }
        while(!q.empty()){
            v.clear();
            int z = q.size();
            for(int i = 0; i < z; i++){
                Node* temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                v.push_back(temp->data);
            }
            if(rev){
                reverse(v.begin(), v.end());
            }
            rev = !rev;
            res.push_back(v);
            
        }
        vector<int> ans;
        for(auto i: res){
            for(auto j: i){
                ans.push_back(j);
            }
        }
        return ans;
    }
};