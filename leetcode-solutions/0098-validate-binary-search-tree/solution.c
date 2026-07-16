/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 bool Valid(struct TreeNode *node,long long min_val,long long max_val){
    if(node==NULL)return true;
    if(node->val<=min_val||node->val>=max_val)return false;
    return Valid(node->left,min_val,node->val)&&Valid(node->right,node->val,max_val);
 }
bool isValidBST(struct TreeNode* root) {
    
    return Valid(root,LLONG_MIN,LLONG_MAX);
  
}
