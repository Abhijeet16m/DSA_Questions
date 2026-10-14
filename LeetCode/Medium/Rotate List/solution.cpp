/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next){
            return head;
        }
        int n = 1;
        ListNode *last = head;
        while(last->next){
            last = last->next;
            n++;
        }
        int toRotate = k%n;
        if(toRotate == 0){
            return head;
        }
        int ToReach = n-toRotate;
        int pos = 1;
        ListNode *curr = head;
        while(pos < ToReach){
            pos++;
            curr = curr->next;
        }
        ListNode *temp = curr->next;
        curr->next = nullptr;
        last->next = head;
        return temp;
    }
};