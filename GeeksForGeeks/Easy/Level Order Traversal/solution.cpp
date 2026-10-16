/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    queue<Node*> q;
    vector<int> res;
    vector<int> levelOrder(Node *root) {
        res.clear();
        if(!root) return {};
        q.push(root);
        while(!q.empty()){
            int z = q.size();
            for(int i = 0; i < z; i++){
                Node * temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                res.push_back(temp->data);
            }
        }
        return res;
    }
};