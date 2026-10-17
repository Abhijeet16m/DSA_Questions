/* A binary tree node
class Node {
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
    int sum = 0;
    bool helper(Node *root, int target){
        if(!root) return false;
        sum += root->data;
        if(!root->left && !root->right){
            if(target == sum){
                return true;
            }
            else{
                sum-=root->data;
                return false;
            }
        }
        if(helper(root->left, target)) return true;
        if(helper(root->right, target)) return true;
        sum -= root->data;
        return false;
    }
    bool hasPathSum(Node *root, int target) {
        sum = 0;
        return helper(root, target);
    }
};