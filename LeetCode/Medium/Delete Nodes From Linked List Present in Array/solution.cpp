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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int> toRemove;
        for(int i: nums) toRemove[i]++;
        ListNode *res = new ListNode();
        ListNode* curr = res;
        ListNode* temp = head;
        while(temp){
            if(toRemove[temp->val] == 0){
                curr->next = new ListNode(temp->val);
                curr = curr->next;
            }
            temp = temp->next;
        }
        return res->next;
    }
};