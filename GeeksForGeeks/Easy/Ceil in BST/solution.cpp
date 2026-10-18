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
    int findCeil(Node* root, int x) {
        Node* curr = root;
        int ans = -1;
        while(curr){
            int temp = curr->data;
            if(temp == x) return temp;
            else if(temp > x){
                ans = temp;
                curr = curr->left;
            }
            else if(temp < x){
                curr = curr->right;
            }
        }
        return ans;
    }
};
