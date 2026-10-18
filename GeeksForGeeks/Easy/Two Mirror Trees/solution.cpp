/* Structure of Binary Tree Node
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
    bool areMirror(Node* a, Node* b) {
        if(!a && !b){
            return true;
        }
        if(!a || !b) return false;
        if(!areMirror(a->left, b->right) || !areMirror(a->right, b->left)) return false;
        return a->data == b->data;
    }
};