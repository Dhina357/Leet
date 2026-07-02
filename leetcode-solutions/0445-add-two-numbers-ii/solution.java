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
        Stack<Integer>s1=new Stack<>();
         Stack<Integer>s2=new Stack<>();
        while(l1!=null){
          s1.push(l1.val);
          l1=l1.next;
        }
        while(l2!=null){
            s2.push(l2.val);
            l2=l2.next;
        }
        ListNode result=null;
        int past=0;
        while(!s1.isEmpty()||!s2.isEmpty()||past!=0){
             int val1=!s1.isEmpty()?s1.pop():0;
             int val2=!s2.isEmpty()?s2.pop():0;
            int sum=val1+val2+past;
           past=sum/10;
            sum=sum%10;
            ListNode newNode=new ListNode(sum);
               newNode.next=result;
               result=newNode;

               
        }
        return result;
    }
}
