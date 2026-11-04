/* Definition for Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int helper(Node* root, int side){
        if(!root) return 0;
        if(!root->left && !root->right){
            if(side == 0) return root->data;
            else return 0;
        } 
        return helper(root->left, 0) + helper(root->right, 1);
    }
    int leftLeavesSum(Node *root) {
        return helper(root->left, 0)+helper(root->right, 1);
    }
};