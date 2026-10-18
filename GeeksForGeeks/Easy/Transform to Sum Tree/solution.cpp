/* Structure for Tree Node
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
    int helper(Node* root){
        if(!root) return 0;
        int temp = root->data;
        root->data = helper(root->left)+helper(root->right);
        return root->data + temp;
    }
    void toSumTree(Node *root) {
        int _ = helper(root);
    }
};