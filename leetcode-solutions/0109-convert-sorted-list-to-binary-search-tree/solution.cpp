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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int size=0;
ListNode * curr;
int sizee(ListNode* head){
    ListNode* temp=head;
  int count=0;
    while(temp!=nullptr){
        count++;
temp=temp->next;
    }
    return count;
}
    TreeNode* rec(ListNode* node,int start,int end){
         if(start>end) return nullptr;
          int mid=start+ (end-start)/2;

         TreeNode * leftt=rec(node,start,mid-1);
        
         TreeNode* temp=new TreeNode(curr->val);
         curr=curr->next;
         temp->left=leftt;
         temp->right=rec(node,mid+1,end);
        return temp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        curr=head;
        size=sizee(head);
        return rec(head,0,size-1);
    }
};
