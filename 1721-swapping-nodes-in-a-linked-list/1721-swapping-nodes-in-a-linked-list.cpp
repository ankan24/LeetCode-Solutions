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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int pos = 0;
        for(int i=0;i<arr.size();i++){
            if(i+1==k){
                pos = i+1;
                break;
            }
             
        }
        swap(arr[k-1],arr[arr.size()-pos]);
        temp = head;
        for(int i=0;i<arr.size();i++){
            temp->val = arr[i];
            temp = temp->next;
        }
        return head;
    }
};