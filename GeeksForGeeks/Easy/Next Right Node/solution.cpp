/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
    Node *nextRight(Node *root, int key) {
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int z = q.size();
            for(int i = 0; i < z; i++){
                Node* temp = q.front();
                q.pop();
                
                // main logic
                if(temp->data == key){
                    if(i == z-1) return new Node(-1);
                    return q.front();
                }
                
                // pushing back next level
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return new Node(-1);
    }
};