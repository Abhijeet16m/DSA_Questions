/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int findMax(Node *root) {
        if(root == nullptr) return -1;
        int curr = max(findMax(root->left), findMax(root->right));
        return max(root->data, curr);
        
        
    }
    
    int findMin(Node *root) {
        if(root == nullptr) return INT_MAX;
        return min(root->data, min(findMin(root->left), findMin(root->right)));
    }
};