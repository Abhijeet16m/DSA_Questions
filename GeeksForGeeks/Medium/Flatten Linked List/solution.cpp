/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};*/

class Solution {
  public:
  
    vector<int> res;
    void helper(Node* head){
        if(!head) return;
        res.push_back(head->data);
        helper(head->bottom);
        helper(head->next);
    }
    Node* makeNode(vector<int> &v){
        Node* head = new Node(0);
        Node* curr = head;
        for(int i: v){
            curr->bottom = new Node(i);
            curr = curr->bottom;
        }
        return head->bottom;
    }
    Node* flatten(Node* head) {
        res.clear();
        helper(head);
        sort(res.begin(), res.end());
        return makeNode(res);
    }
};