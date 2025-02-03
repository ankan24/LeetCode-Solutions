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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* temp = head;
        vector<int> arr;
        while(temp!=NULL && temp->next!=NULL){
           arr.push_back(temp->val);
           if (temp->next) temp = temp->next->next;
        } if(temp) arr.push_back(temp->val);

         temp = head->next;
         while(temp!=NULL && temp->next!=NULL){
           arr.push_back(temp->val);
           if (temp->next) temp = temp->next->next;
        }if(temp) arr.push_back(temp->val);

         temp = head;
          int i=0;
        while (temp!=NULL) {
            temp->val = arr[i++];
            temp = temp->next;
        }
        return head;
    }
};