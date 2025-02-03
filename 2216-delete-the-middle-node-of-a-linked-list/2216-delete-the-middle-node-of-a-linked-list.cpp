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
    ListNode* deleteMiddle(ListNode* head) {
           if(!head || !head->next) return nullptr; 
        ListNode*slow = head; 
        ListNode*fast = head->next->next; 
        while(fast !=nullptr && fast->next != nullptr){
            fast = fast->next->next; 
            slow = slow->next; 
        }
        ListNode*delnode = slow->next;
        slow->next =slow->next->next; 
        delete delnode; 
        return head;
    }
};