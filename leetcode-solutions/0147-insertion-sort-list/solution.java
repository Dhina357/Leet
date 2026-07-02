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
    public ListNode insertionSortList(ListNode head) {
         if (head == null || head.next == null) {
            return head;
        }
        ListNode current=head;
        ListNode dummy=new ListNode(0);
        while(current!=null){
            ListNode nextitr=current.next;
            ListNode prev=dummy;
            while(prev.next!=null&&prev.next.val<current.val){
                 prev=prev.next;
            }
           current.next=prev.next;
           prev.next=current;
            current=nextitr;
            
        }
        return dummy.next;
    }
}
