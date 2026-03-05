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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if(head==null||left==right)return head;
        ListNode dummy=new ListNode(0);
        dummy.next=head;
        ListNode prev=dummy;
        for(int i=1;i<left;i++)prev=prev.next;
        ListNode curr=prev.next;
        ListNode temp=prev;
        ListNode tem=curr;

      
        for(int i=left-1;i<right;i++){
           ListNode next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        } 
        tem.next=curr;
        temp.next=prev;
        return dummy.next;
    }
}
