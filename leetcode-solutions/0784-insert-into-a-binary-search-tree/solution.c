/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode* check(struct TreeNode* temp,int val){
    if(temp==NULL){
        struct TreeNode* newNode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
            newNode->val=val;
            newNode->left=NULL;
            newNode->right=NULL;
            return newNode;
           
    }
    if(temp->val<val) {
       temp->right=check(temp->right,val);
    }else{
          temp->left=check(temp->left,val);
    }
    return temp;
 }
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
   return check(root,val);
}
