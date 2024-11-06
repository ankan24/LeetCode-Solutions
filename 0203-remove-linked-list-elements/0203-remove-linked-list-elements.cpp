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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* crnt = head;

        while(crnt!=NULL){
            if(crnt->val == val){
                prev->next = crnt->next;
                delete crnt;
                crnt = prev->next;
            }else{
                crnt = crnt->next;
                prev = prev->next;
            }
        }
 
        return dummy->next;
    }
};