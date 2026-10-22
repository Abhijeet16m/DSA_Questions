/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* insertIntoEmpty(Node* last, int data) {
        // code here
        Node* head = new Node(data);
        head->next = head;
        return head;

    }
};
