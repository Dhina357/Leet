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
   void tra(TreeNode* root,vector<int>&temp){
        if(root==nullptr) return ;
        temp.push_back(root->val);
        tra(root->left,temp);
        tra(root->right,temp);

    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
    tra(root,ans);
    return ans;
        
    }
};
