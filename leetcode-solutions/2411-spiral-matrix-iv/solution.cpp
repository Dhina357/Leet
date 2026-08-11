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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int top=0,down=m-1,left=0,right=n-1;
        int i=0,j=0;
        while(head!=NULL){
            j=left;
                while(j<=right&&head!=NULL){
                    ans[top][j]=head->val;
                    head=head->next;
                    j++;
                }
            top++;
            i=top;
                 while(i<=down&&head!=NULL){
                        ans[i][right]=head->val;
                        head=head->next;
                        i++;
                }    
            right--;
            j=right;
                 while(j>=left&&head!=NULL){
                    ans[down][j]=head->val;
                    head=head->next;
                    j--;
                 }    
             down--;
             i=down;
                 while(i>=top&&head!=NULL){
                     ans[i][left]=head->val;
                     head=head->next;
                     i--; 
             }    
             left++;

        }
        return ans;
    }
};
