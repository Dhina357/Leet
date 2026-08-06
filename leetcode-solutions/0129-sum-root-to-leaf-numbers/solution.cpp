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
int sum=0;
    void rec(TreeNode* node,int currSum){
        
          if(!node)return ;
          if(!node->left&&!node->right){sum+=currSum*10+node->val;
          return ;}
          currSum=currSum*10+node->val;
    if(node->left){
     rec(node->left,currSum);
    }
    if(node->right){
        rec(node->right,currSum);
    }
   
    }
    int sumNumbers(TreeNode* root) {
        rec(root,sum);
        return sum;
    }
};
