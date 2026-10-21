/* Structure of tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
    vector<int> res;
    void helper(Node* root, int low, int high){
        if(!root) return;
        if(root->data >= low && root->data <= high){
            helper(root->left, low, high);
            res.push_back(root->data);
            helper(root->right, low, high);
        }
        else if(root->data > high){
            helper(root->left, low, high);
        }
        else if(root->data < low){
            helper(root->right, low, high);
        }
    }
    vector<int> nodesInRange(Node *root, int low, int high) {
        res.clear();
        helper(root, low, high);
        return res;
    }
};