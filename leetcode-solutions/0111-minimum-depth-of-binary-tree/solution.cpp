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
int rec(TreeNode* node){
    
    if(!node)return 0;
    if(!node->left){
      return 1+rec(node->right);
    }
    if(!node->right){
        return 1+rec(node->left);
    }
    return 1+min(rec(node->left),rec(node->right));
}
    int minDepth(TreeNode* root) {
        return rec(root);
    }
};
