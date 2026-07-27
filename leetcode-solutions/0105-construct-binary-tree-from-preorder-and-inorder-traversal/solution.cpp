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
     int index=0;
     unordered_map<int,int>pos;
      TreeNode* built(vector<int>& preorder, vector<int>& inorder,int left,int right){
        if(left>right)return nullptr;
        int rootindex=preorder[index++];
        int mid=pos[rootindex];
        TreeNode *root=new TreeNode(rootindex);
        root->left=built(preorder,inorder,left,mid-1);
  root->right=built(preorder,inorder,mid+1,right);
        return root;
      }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();

        for(int i=0;i<n;i++){
            pos[inorder[i]]=i;
        }
        return built(preorder,inorder,0,n-1);
    }
};
