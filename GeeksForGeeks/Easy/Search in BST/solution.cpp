/* Definition for Node
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
    bool search(Node* root, int key) {
        Node* curr = root;
        while(curr){
            if(curr->data == key) return true;
            else if(curr->data > key) curr = curr->left;
            else if(curr->data < key) curr = curr->right;
        }
        return false;
    }
};