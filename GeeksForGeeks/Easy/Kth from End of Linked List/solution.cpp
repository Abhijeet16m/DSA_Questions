/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int len(Node* head){
        if(!head) return 0;
        return 1 + len(head->next);
    }
    int getKthFromLast(Node* head, int k) {
        int length = len(head);
        Node* curr = head;
        int x = length - k;
        while(x-- && curr){
            curr = curr->next;
        }
        if(!curr) return -1;
        return curr->data;
    }
};