/* Linked List Node Structure
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
    int getLength(Node *head) {
        map<Node*, int> mp;
        Node* curr = head;
        int count = 0;
        while(curr){
            if(mp[curr] != 0) break;
            mp[curr] = 1;
            count++;
            curr = curr->next;
        }
        return count;
    }
};