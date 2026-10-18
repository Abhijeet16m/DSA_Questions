/*  Structure of a Binary Tree
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
    int maxWidth(Node* root) {
        if(!root) return 0;
        queue<Node*> q;
        q.push(root);
        int maxVal = 0;
        while(!q.empty()){
            int z = q.size();
            maxVal = max(maxVal, z);
            for(int i = 0; i < z; i++){
                Node* curr = q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return maxVal;
    }
};