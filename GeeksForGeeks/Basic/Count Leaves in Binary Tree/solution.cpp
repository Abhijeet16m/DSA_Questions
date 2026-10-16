/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    int countLeaves(Node* root) {
        if(!root) return 0;
        if(root->left == nullptr && root->right == nullptr) return 1;
        return countLeaves(root->left) + countLeaves(root->right); 
    }
};