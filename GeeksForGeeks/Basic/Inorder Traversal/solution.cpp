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
  vector<int> res;
  void helper(Node *root){
      if(!root) return;
      helper(root->left);
      res.push_back(root->data);
      helper(root->right);
  }
    vector<int> inOrder(Node* root) {
        helper(root);
        return res;
    }
};