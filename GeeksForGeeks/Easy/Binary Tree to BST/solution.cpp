/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:  
    vector<int> v;
    int pos = 0;
    void inorder(Node* root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    void helper(Node* root){
        if(!root) return;
        helper(root->left);
        root->data = v[pos];
        pos++;
        helper(root->right);
    }
    Node *binaryTreeToBST(Node *root) {
        v.clear();
        inorder(root);
        sort(v.begin(), v.end());
        pos = 0;
        helper(root);
        return root;
    }
};