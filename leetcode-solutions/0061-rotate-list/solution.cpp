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

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr)return head;
        int count=1;
        ListNode* temp=head;
        while(temp->next!=nullptr){
            count++;
            temp=temp->next;
        }
        int n=count-k%count;
        ListNode* node=head;
        for(int i=1;i<n;i++){
     node=node->next;
        }
        temp->next=head;
        head=node->next;
        node->next=nullptr;
return head;

        
    }
};
