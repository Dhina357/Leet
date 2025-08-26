/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    while(l1==NULL && l2==NULL){
        return NULL;
    }
    struct ListNode*s=l1;
     struct ListNode*ss=l2;
    int i,a=0,k=0;
    int arr[100];
    while(s!=NULL || ss!=NULL || a!=NULL){
         i=a;
       if(s!=NULL){
        i=i+s->val;
        s=s->next;
       }
       if(ss!=NULL){
        i=i+ss->val;
        ss=ss->next;
       }
         a=i/10;
       arr[k]=i%10;
       k++;
     
    }
  
    struct ListNode*rt=NULL;
    struct ListNode*temp=NULL;
    
    for(int m=0;m<k;m++){
struct ListNode *node=( struct ListNode*)malloc(sizeof(struct ListNode)); 
    node->val=arr[m];
    node->next=NULL;
   if(rt==NULL){
    rt=node;
    temp=node;
   }
   else{
  temp->next=node;
  temp=node;
   }
   }
return rt;
}
