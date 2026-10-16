/* Structure of binary tree node
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
    int helper(Node *root){
        if(!root) return 0;
        return 1 + max(helper(root->left), helper(root->right));
    }
    bool isBalanced(Node* root) {
        if(!root) return true;
        if(!isBalanced(root->left) || !isBalanced(root->right)) return false;
        return abs(helper(root->left) - helper(root->right)) <= 1;
    }
};