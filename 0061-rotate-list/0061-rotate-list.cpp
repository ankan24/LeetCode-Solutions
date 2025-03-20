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
        if(head==NULL || head->next==NULL || k==0) return head;

        ListNode* t = head;
        int len = 1;
        while(t->next){
            len++;
            t = t->next;
        }

        t->next = head;
        k = k%len;
        k = len-k;
       
       while(k--) t = t->next;

       head = t->next;
       t->next = NULL;

       return head;
    }
};