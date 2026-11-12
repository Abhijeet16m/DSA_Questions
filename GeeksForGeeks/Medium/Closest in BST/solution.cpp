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
};
*/

class Solution {
  public:
    int res = INT_MAX;
    void helper(Node* root, int k){
        if(!root) return;
        res = min(res, abs(k- root->data));
        if(root->data==k) return;
        if(root->data > k) helper(root->left, k);
        if(root->data < k) helper(root->right, k);
    }
    int minDiff(Node *root, int k) {
        helper(root, k);
        return res;
    }
};
