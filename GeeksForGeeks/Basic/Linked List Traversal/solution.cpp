/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    void printList(Node* head) {
        if(!head) return;
        cout<<head->data<<" ";
        printList(head->next);
    }
};