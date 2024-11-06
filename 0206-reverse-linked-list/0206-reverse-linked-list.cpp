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
ListNode* reverseList(ListNode* head) {
 ListNode* temp = head;
  stack<int>s;
  while(temp!=NULL){
    s.push(temp->val);
    temp=temp->next;
  }
 temp=head;
  while(!s.empty()){
    temp->val=s.top();
    temp=temp->next;
    s.pop();
   }
   return head;
  }
};