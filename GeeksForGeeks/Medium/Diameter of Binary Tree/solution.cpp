/* Structure of binary tree Node 
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
    int dia = 0;
    int maxHeight(Node *root){
        if(!root) return 0;
        return 1 + max(maxHeight(root->left), maxHeight(root->right));
    }
    void helper(Node *root){
        if(!root) return;
        dia = max(maxHeight(root->left) + maxHeight(root->right), dia);
        helper(root->left);
        helper(root->right);
    }
    int diameter(Node* root) {
        helper(root);
        return dia;
    }
};