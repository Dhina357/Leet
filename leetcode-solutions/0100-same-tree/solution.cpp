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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<TreeNode*>st;
        stack<TreeNode*>stt;
        
        while(!st.empty()||!stt.empty()||p!=nullptr||q!=nullptr){
            while(p!=nullptr||q!=nullptr){
                 if (p == nullptr || q == nullptr) return false;
                st.push(p);
                stt.push(q);
                p=p->left;
                q=q->left;

            }
            TreeNode* temp=st.top();
            st.pop();
            TreeNode* tempp=stt.top();
            stt.pop();
            if(temp->val!=tempp->val)return false;
           p=temp->right;
           q=tempp->right;
           
        }

        return true;
    }
};
