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
 vector<string>ans;
void rec(TreeNode* node,string s){
    if(node==NULL)return;
    if(!node->left&&!node->right){
        s=s+to_string(node->val);
        ans.push_back(s);
        return;
    }
    s=s+to_string(node->val)+"->";
    
   rec(node->left,s);
   rec(node->right,s);

    return ;
}
    vector<string> binaryTreePaths(TreeNode* root) {
       
  string s;
      rec(root,s);
      return ans;
    }
};
