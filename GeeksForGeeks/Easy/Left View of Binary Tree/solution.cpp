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
    queue<Node*> q;
    vector<int> leftView(Node *root) {
        if(!root) return {};
        vector<int> res;
        q.push(root);
        while(!q.empty()){
            int z = q.size();
            for(int i = 0; i < z; i++){
                Node* temp = q.front();
                if(i == 0){
                    res.push_back(temp->data);
                }
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return res;
    }
};