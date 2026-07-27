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
TreeNode* built(vector<int>& preorder, vector<int>&postorder,int left,int right){
        if(left>right)return nullptr;
 TreeNode *root=new TreeNode(preorder[index++]);
 if(left==right)
 return root;
        int rootindex=preorder[index];
        int mid=pos[rootindex];
       
        root->left=built(preorder,postorder,left,mid);
  root->right=built(preorder,postorder,mid+1,right-1);
        return root;
      }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n=preorder.size();

        for(int i=0;i<n;i++){
            pos[postorder[i]]=i;
        }
        return built(preorder,postorder,0,n-1);
    }
};
   
        
    

