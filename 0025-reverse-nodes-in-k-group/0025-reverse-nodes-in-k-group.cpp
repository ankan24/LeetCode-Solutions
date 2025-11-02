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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* t = head;
        vector<int> arr;
        while(t!=NULL){
            arr.push_back(t->val);
            t = t->next;
        }

        for(int i=0;i+k<=arr.size();i=i+k){
             reverse(arr.begin()+i,arr.begin()+i+k);
        }

        t = head;
        for(int i=0;i<arr.size();i++){
            t->val = arr[i];
            t = t->next;
        }
        return head;
    }
};