/* Tree Node Structure
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int maxLevel(Node *root) {
        if(!root) return 0;
        return 1 + max(maxLevel(root->left), maxLevel(root->right));
    }
};
