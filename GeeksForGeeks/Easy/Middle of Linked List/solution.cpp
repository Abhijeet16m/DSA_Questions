/* Linked List Node Structure
class Node {
    int data;
    Node* next;

    Node(int x){
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
    int getMiddle(Node* head) {
        int l = len(head);
        int mid = l/2;
        Node* curr = head;
        while(mid--){
            curr = curr->next;
        }
        return curr->data;
    }
};