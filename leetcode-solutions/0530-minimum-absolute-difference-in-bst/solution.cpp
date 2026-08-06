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
long long mini=100000;
void rec(TreeNode* node,long long mina ,long long maxa){
    if(node==nullptr)return ;
    mini=min(mini,min(abs(mina-node->val),abs(node->val-maxa)));
    rec(node->left,mina,node->val);
    rec(node->right,node->val,maxa);
}
    int getMinimumDifference(TreeNode* root) {
        rec(root,INT_MIN,INT_MAX);
        return mini;
    }
};
