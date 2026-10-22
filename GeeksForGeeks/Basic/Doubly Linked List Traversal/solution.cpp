/* Structure of doubly linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    vector<vector<int>> displayList(Node *head) {
        vector<vector<int>> res;
        vector<int> temp;
        Node* curr = head;
        Node* pre = nullptr;
        while(curr){
            temp.push_back(curr->data);
            pre = curr;
            curr = curr->next;
        }
        res.push_back(temp);
        temp.clear();
        while(pre){
            temp.push_back(pre->data);
            pre = pre->prev;
        }
        res.push_back(temp);
        return res;
    }
};