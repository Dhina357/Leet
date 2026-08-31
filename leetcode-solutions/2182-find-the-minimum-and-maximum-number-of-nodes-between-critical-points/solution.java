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
    public int[] nodesBetweenCriticalPoints(ListNode head) {
         int idx=1;
        int  start=-1;
        int end=-1;
        int cur=-1;
        int min=Integer.MAX_VALUE;
        ListNode temp=head;
        ListNode curr=temp.next;
        while(curr.next!=null){
            if((temp.val<curr.val&&curr.val>curr.next.val)||
            (temp.val>curr.val&&curr.val<curr.next.val)) {
                if(start==-1){start=idx;
                cur=idx;
                }
                else 
                {
                    min=idx-cur<min?idx-cur:min;
                    cur=idx;
                    end=idx;
                }
            }
            idx++;
            temp=curr;
            curr=curr.next;

        }
        int max=start==-1||end==-1?-1:end-start;
        min=(min==Integer.MAX_VALUE)?-1:min;
        int[] ans=new int[2];
        ans[0]=min;
        ans[1]=max;
        return ans;
    }
}
