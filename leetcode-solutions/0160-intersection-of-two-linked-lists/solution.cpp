/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curr=headA;
        ListNode *temp=headB;
       while(curr!=temp){
       
        if(curr==nullptr)curr=headB;
        else curr=curr->next;
        if(temp==nullptr)temp=headA;
         else
         temp=temp->next;
       }
       return curr;
    }
};
