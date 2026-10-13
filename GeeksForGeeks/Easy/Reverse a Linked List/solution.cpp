/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/


class Solution {
  public:
    void helper(Node *head, Node *second){
        if(second == nullptr) return;
        helper(head->next, second->next);
        second->next = head;
    }
    Node* reverseList(Node* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        Node *curr = head;
        while(curr->next){
            curr = curr->next;
        }
        helper(head, head->next);
        head->next = nullptr;
        return curr;
    }
};