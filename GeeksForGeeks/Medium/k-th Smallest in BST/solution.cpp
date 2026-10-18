/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> v;
    void inorder(Node* root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    int kthSmallest(Node *root, int k) {
        v.clear();
        inorder(root);
        if(k > v.size()) return -1;
        return v[k-1];
    }
};