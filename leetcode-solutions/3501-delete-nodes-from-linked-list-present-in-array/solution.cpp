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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=NULL;
       unordered_set<int>ans(nums.begin(),nums.end());
        while(temp){
            ListNode* next=temp->next;
            
            if(ans.count(temp->val)){
                if(temp==head){
                    head=temp->next;
                }else{
                    if(prev)prev->next=next;
                    
                }
            }else{
                prev=temp;
            }
temp=next;

        }return head;
    }
};
