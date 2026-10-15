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
    void helper(Node* root){
        if(!root) return;
        helper(root->left);
        helper(root->right);
        res.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        res.clear();
        helper(root);
        return res;
    }
};