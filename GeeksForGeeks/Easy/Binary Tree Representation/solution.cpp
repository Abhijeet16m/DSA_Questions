/*
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
};
*/
class Solution {
  public:
    Node* build(vector<int> &nodes, int i, int n){
        if(i >= n){
            return nullptr;
        }
        Node* root = new Node(nodes[i]);
        root->left = build(nodes, 2*i+1, n);
        root->right = build(nodes, 2*i+2, n);
        return root;
    }
    Node* buildTree(vector<int>& nodes) {
        return build(nodes, 0, nodes.size());
    }
};