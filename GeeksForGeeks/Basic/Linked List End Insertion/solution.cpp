/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        if(!head) return new Node(x);
        Node* curr = head;
        while(curr->next){
            curr = curr->next;
        }
        curr->next = new Node(x);
        return head;
    }
};