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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && list2){
            return list2;
        }
        if(!list2 && list1){
            return list1;
        }
        if(!list1 && !list2){
            return nullptr;
        }
        ListNode *curr = nullptr;
        ListNode* i = list1;
        ListNode* j = list2;
        if(i->val < j->val){
            curr = new ListNode(i->val);
            i = i->next;
        }else{
            curr = new ListNode(j->val);
            j = j->next;
        }
        ListNode *temp = curr;
        while(i && j){
            if(i->val < j->val){
                temp->next = new ListNode(i->val);
                i = i->next;
            }
            else{
                temp->next = new ListNode(j->val);
                j = j->next;
            }
            temp = temp->next;
        }
        if(i){
            temp->next = i;
        }
        else if(j){
            temp->next = j;
        }
        return curr;
    }
};