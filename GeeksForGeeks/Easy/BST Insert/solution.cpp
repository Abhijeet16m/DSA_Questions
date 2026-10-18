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
}; */

class Solution {
  public:
    Node* insert(Node* root, int key) {
        if(!root) return new Node(key);
        Node* curr = root;
        while(curr){
            int temp = curr->data;
            if(temp == key) return root;
            else if(temp > key){
                if(!curr->left){
                    curr->left = new Node(key);
                    return root;
                }
                curr=curr->left;
            }
            else if(temp < key){
                if(!curr->right){
                    curr->right = new Node(key);
                    return root;
                }
                curr=curr->right;
            }
        }
        return root;
    }
};