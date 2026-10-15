/* Structure of Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> res;
    void helper(Node* root){
        if(root == nullptr) return;
        res.push_back(root->data);
        helper(root->left);
        helper(root->right);
    }
    vector<int> preOrder(Node* root) {
        res.clear();
        helper(root);
        return res;
    }
};