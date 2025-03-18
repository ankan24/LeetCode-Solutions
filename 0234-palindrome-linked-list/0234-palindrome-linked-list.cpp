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
    bool isPalindrome(ListNode* head) {
        ListNode* t = head;
        vector<int> arr;
        while(t!=NULL){
            arr.push_back(t->val);
            t = t->next;
        }
        vector<int> rev = arr;
        reverse(rev.begin(),rev.end());

        return arr==rev;
    }
};