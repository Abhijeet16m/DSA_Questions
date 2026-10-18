/* Structure of a Binary Search Tree node
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
    vector<int> v;
    void inorder(Node* root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    bool isBST(Node* root) {
        v.clear();
        inorder(root);
        for(int i = 1; i < v.size(); i++){
            if(v[i] <= v[i-1]) return false;
        }
        return true;
    }
};