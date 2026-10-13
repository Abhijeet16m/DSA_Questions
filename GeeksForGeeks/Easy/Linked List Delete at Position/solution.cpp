/* Structure of Linked List Node
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
    Node* deleteNode(Node* head, int x) {
        Node *curr = head;
        if(x == 1){
            return head->next;
        }
        x--;
        while(curr){
            if(x == 1){
                curr->next = curr->next->next;
                break;
            }
            x--;
            curr = curr->next;
        }
        return head;
    }
};