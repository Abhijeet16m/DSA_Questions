/*
Definition for Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        Node* curr = root;
        int ans = -1;
        while(curr){
            int temp = curr->data;
            if(temp == k) return temp;
            else if(temp < k){
                ans = temp;
                curr = curr->right;
            }
            else if(temp > k){
                curr = curr->left;
            }
        }
        return ans;
    }
};