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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        while(t1!=NULL){
            arr.push_back(t1->val);
            t1 = t1->next;
        }
          while(t2!=NULL){
            arr.push_back(t2->val);
            t2 = t2->next;
        }
        sort(arr.begin(),arr.end());

        if (arr.empty()) return nullptr;
        
        ListNode* newNode = new ListNode(arr[0]);
        ListNode* temp = newNode;
        for(int i=1;i<arr.size();i++){
            temp->next = new ListNode(arr[i]);
            temp = temp->next;
        }
        return newNode;
    }
};