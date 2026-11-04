/* Structure of tree node
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
    int dfs(Node* root, int target, int level){
        if(!root) return 0;
        if(root->data == target) return level;
        int left = dfs(root->left, target, level+1);
        int right = dfs(root->right, target, level+1);
        if(left == 0 && right == 0) return 0;
        if(left == 0) return right;
        return left;
    }
    int getLevel(struct Node *node, int target) {
        return dfs(node, target, 1);
    }
};