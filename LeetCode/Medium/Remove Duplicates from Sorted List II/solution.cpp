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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> mp;
        ListNode *curr = head;
        while(curr){
            mp[curr->val]++;
            curr = curr->next;
        }
        ListNode *res = new ListNode();
        ListNode *temp = res;
        curr = head;
        while(curr){
            if(mp[curr->val] == 1){
                temp->next = new ListNode(curr->val); 
                temp = temp->next;
            }
            curr = curr->next;
        }
        return res->next;
    }
};