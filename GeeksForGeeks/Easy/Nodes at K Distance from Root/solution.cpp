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
};*/

class Solution {
  public:
    vector<int> kdistance(Node *root, int k) {
        if(!root) return {};
        queue<Node*> q;
        q.push(root);
        while(!q.empty() && k--){
            int z = q.size();
            for(int i = 0; i < z; i++){
                Node *temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        vector<int> res;
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            res.push_back(temp->data);
        }
        return res;
    }
};