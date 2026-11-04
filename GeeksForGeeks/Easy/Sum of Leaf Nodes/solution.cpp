/* A Binary Tree Node
class Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int leafSum(Node* root) {
        if(!root) return 0;
        if(!root->left && !root->right) return root->data;
        int left = 0, right = 0;
        if(root->left) left = leafSum(root->left);
        if(root->right) right = leafSum(root->right);
        return left+right;
    }
};