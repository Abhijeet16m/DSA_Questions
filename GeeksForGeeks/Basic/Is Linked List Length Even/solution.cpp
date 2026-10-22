/* Structure of link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    bool isEven(Node* head) {
        Node* curr = head;
        int count = 0;
        while(curr){
            count++;
            curr = curr->next;
        }
        return count%2==0;
    }
};