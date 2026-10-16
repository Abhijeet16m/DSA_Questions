/* Definition for Node
class Node {
public:
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
    int helper(Node *root){
        if(!root) return 0;
        return root->data + helper(root->left) + helper(root->right);
    }
    bool isSumTree(Node* root) {
        if(!root) return true;
        if(!isSumTree(root->left) || !isSumTree(root->right)) return false;
        if(!root->left && !root->right) return true;
        return root->data == (helper(root->left) + helper(root->right));
    }
};