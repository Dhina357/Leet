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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
         ListNode head=new ListNode(0);
           ListNode temp=head;
          ListNode curr1=l1;
        ListNode curr2=l2;
       int a=0;
        while(curr1!=null||curr2!=null||a!=0){
            int data=0;
            if(curr1!=null){
                data+=curr1.val;
                curr1=curr1.next;
            }
            if(curr2!=null){
                data+=curr2.val;
                curr2=curr2.next;
            }
             data+=a;
            
            
           a=data/10;
            ListNode sum=new ListNode();
             sum.val=data%10;
             sum.next=null;
             
            temp.next=sum;
            temp=sum;
           }
        return head.next;
    }
}
