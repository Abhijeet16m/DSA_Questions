/* Structure of Tree Node
class Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* removeHalfNodes(Node* root) {
        // base case
        if(!root) return nullptr;
        // recusion
        Node* left = removeHalfNodes(root->left);
        Node* right = removeHalfNodes(root->right);
        
        // fixing tree;
        root->left = left;
        root->right = right;
        
        // returning
        if(root->left && !root->right) return root->left;
        if(!root->left && root->right) return root->right;
        return root;
    }
};