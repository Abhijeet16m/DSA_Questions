/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isSumProperty(Node *root) {
        if(!root) return true;
        if(!isSumProperty(root->left)) return false;
        if(!isSumProperty(root->right)) return false;
        if(!root->left && !root->right) return true;
        if(!root->left){
            return root->data == root->right->data;
        }
        if(!root->right){
            return root->data == root->left->data;
        }
        return root->data == (root->left->data + root->right->data);
    }
};