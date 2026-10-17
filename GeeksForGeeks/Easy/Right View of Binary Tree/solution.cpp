/*
Definition for Node
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
    vector<int> rightView(Node *root) {
        vector<int> ans;
        queue<Node*> q;
        if(!root) return {};
        q.push(root);
        while(!q.empty()){
            int z = q.size();
            for(int i = 0; i < z; i++){
                Node *temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                if(i == (z-1)) ans.push_back(temp->data);
            }
        }
        return ans;
    }
};