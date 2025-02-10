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
        if(head==NULL || head->next==NULL) return head;
         ListNode* temp = head;
         vector<int> arr;
         while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
         }
         vector<int> ans;
         for(int i=0;i<arr.size();i++){
            if(i%2==0) ans.push_back(arr[i]);
         }
           for(int i=0;i<arr.size();i++){
            if(i%2!=0) ans.push_back(arr[i]);
         }
         temp = head;
         for(int i=0;i<ans.size();i++){
            temp->val = ans[i];
            temp = temp->next;
         }
       return head;
    }
};