/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* point = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;;

            if(slow == fast){
                while(point!=slow){
                    point=point->next;
                    slow=slow->next;
                }
               return point;
            }

        }
        return NULL;
    }
};