/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if(!head || !head->next) return head;
        Node* i = head;
        Node* j = head->next;
        while(j){
            if(i->data == j->data){
                Node* temp = j;
                j = j->next;
                delete temp;
                i->next = j;
            }
            else{
                i = j;
                j = j->next;
            }
        }
        return head;
    }
};