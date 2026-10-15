/* Structrue of Binary Tree Node
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
    int h = 0;
    int count = 0;
    void helper(Node *root){
        if(root == nullptr){
            h = max(h, count);
            return;
        }
        count++;
        helper(root->left);
        helper(root->right);
        count--;
    }
    int height(Node* root) {
        h = 0;
        helper(root);
        return h-1;
    }
};