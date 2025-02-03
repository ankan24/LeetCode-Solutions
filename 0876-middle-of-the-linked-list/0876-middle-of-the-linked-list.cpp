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
    ListNode* middleNode(ListNode* head) {
         ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL){
              fast = fast->next->next;
              slow = slow->next;
        }
        return slow;

        // ListNode *temp = head;
        // int c = 0;
        // while(temp->next!=NULL){
        //     c++;
        //     temp = temp->next;
        // }
        // if(c%2 != 0) c /= 2;
        // else if(c%2 == 0) c = (c/2)+1;

        // temp = head;
        // while(c--){
        //      temp = temp->next;
        // }
        // head = temp;
        // return head;
    }
};