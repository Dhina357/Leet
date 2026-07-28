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
 int countNodes(TreeNode* root) {
        if (root == nullptr) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
bool rec(TreeNode* node ,long long index,int total){
    if(node==nullptr)return true;
    if(index>=total)return false;
   return  rec(node->left,2*index+1,total)&&rec(node->right,2*index+2,total);
}
    bool isCompleteTree(TreeNode* root) {
         int total = countNodes(root);
       return  rec(root,0,total);
        
    }
};
