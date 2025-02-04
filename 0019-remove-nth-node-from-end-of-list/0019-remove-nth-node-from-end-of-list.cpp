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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        ListNode* temp = head;
        int nodeCount = 0;
        while(temp!=NULL){
            nodeCount++;
            temp = temp->next;
        }
        if(nodeCount == n){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int prevNodePos = nodeCount - n -1;
        temp = head;
        while(prevNodePos--){
             temp = temp->next;
        }
        ListNode* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;

        return head;
    }
};