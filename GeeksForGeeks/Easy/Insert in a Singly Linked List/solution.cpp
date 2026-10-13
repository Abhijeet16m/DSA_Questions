/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
}; */

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        Node *temp = new Node(val);    
        if(pos == 1){
            temp->next = head;
            return temp;
        }
        int index = 1;
        pos--;
        Node *curr = head;
        while(curr){
            if(index == pos) break;
            curr = curr->next;
            index++;
        }
        temp->next = curr->next;
        curr->next = temp;
        return head;
    }
};