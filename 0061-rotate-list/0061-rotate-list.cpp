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
        vector<int> arr;
        while(t!=NULL){
            arr.push_back(t->val);
            t = t->next;
        }
         k = k%arr.size();
        vector<int> ans;
        for(int i = arr.size()-k;i<arr.size();i++) ans.push_back(arr[i]);
        for(int i=0;i<arr.size()-k;i++) ans.push_back(arr[i]);

        t = head;
       for(int i=0;i<ans.size();i++){
          t->val = ans[i];
          t = t->next;
       }
       return head;
    }
};