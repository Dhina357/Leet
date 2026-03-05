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
    public void reorderList(ListNode head) {
         if(head == null) return;
        ListNode temp=head;
       int count=0;
        Stack<ListNode> s=new Stack<>();
        while(temp!=null){
               s.push(temp);
             temp=temp.next;
         
            count++;
        }
        temp=head;
        for(int i=0;i<count/2;i++){
             ListNode last=s.pop();
             ListNode next=temp.next;
             temp.next=last;
            last.next=next;
            temp=next;
        }
        temp.next=null;
       
        
    }
}
