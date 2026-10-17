/* Definition of Tree Node
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
    vector<int> res;
    void helper(Node *root){
        if(!root->left && !root->right) return;
        if(!root->left && root->right){
            res.push_back(root->right->data);
        }
        if(!root->right && root->left){
            res.push_back(root->left->data);
        }
        if(root->left) helper(root->left);
        if(root->right) helper(root->right);
    }
    vector<int> noSibling(Node* root) {
        res.clear();
        helper(root);
        if(res.size() == 0) return {-1};
        sort(res.begin(), res.end());
        return res;
    }
};