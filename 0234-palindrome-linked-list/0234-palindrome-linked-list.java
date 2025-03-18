/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode revlist(ListNode h){
            if(h==null || h.next==null)  return h;

            ListNode newNode = revlist(h.next);
            ListNode f = h.next;
            f.next = h;
            h.next = null;
       return newNode;
    }

    public boolean isPalindrome(ListNode head) {
        if(head==null || head.next==null) return true;

        ListNode s = head;
        ListNode f = head;
         // find middle of list
        while(f.next!=null && f.next.next!=null){
            s = s.next;
            f = f.next.next;
        }
         // reverse the right part
        ListNode newHead = revlist(s.next);
       
        // check two pointers valu equal or not
        ListNode first = head;
        ListNode second = newHead;
        while(second!=null){
            if(first.val!=second.val) return false;
          first = first.next;
            second = second.next;
         }
         return true;
    }
}