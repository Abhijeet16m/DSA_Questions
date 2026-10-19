/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* helper(vector<int> &arr, int start, int end){
        if(start > end) return nullptr;
        int mid = start + (end - start)/2;
        Node* curr = new Node(arr[mid]);
        curr->left = helper(arr, start, mid-1);
        curr->right = helper(arr, mid+1, end);
        return curr;
    }
    Node* sortedArrayToBST(vector<int>& arr) {
        return helper(arr, 0, arr.size()-1);
    }
};