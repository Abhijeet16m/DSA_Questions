/* Structure of a Binary Tree Node
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
    vector<int> inorder;
    void helper(Node* root){
        if(!root) return;
        helper(root->left);
        inorder.push_back(root->data);
        helper(root->right);
    }
    int kthLargest(Node *root, int k) {
        inorder.clear();    
        helper(root);
        if(k > inorder.size()) return -1;
        return inorder[inorder.size()-k];
    }
};