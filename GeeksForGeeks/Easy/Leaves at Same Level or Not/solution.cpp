/* Definition for Node
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
    int lastLeaf = -1;
    bool flag = true;
    void helper(Node* root, int level){
        if(!root) return;
        if(!root->left && !root->right){
            if(lastLeaf == -1){
                lastLeaf = level;
                return;
            }
            if(lastLeaf != level){
                flag = false;
                return;
            } 
        }
        helper(root->left, level+1);
        helper(root->right, level+1);
        
    }
    bool check(Node* root) {
        if(!root) return true;
        helper(root, 1);
        return flag;
    }
};