/*
Definition for Node
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
    int minValue(Node* root) {
        if(!root) return -1;
        Node* curr = root;
        int minVal = curr->data;
        while(curr){
            minVal = curr->data;
            curr=curr->left;
        }
        return minVal;
    }
};