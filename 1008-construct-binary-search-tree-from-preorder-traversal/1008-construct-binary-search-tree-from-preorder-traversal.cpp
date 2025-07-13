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
    TreeNode* buildbst(TreeNode* &r , int ele){
        if(!r) return r = new TreeNode(ele);
        if(r->val > ele){
            r->left = buildbst(r->left,ele);
        }
        if(r->val < ele){
            r->right = buildbst(r->right,ele);
        }
        return r;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* root = NULL;
        for(int i=0;i<preorder.size();i++){
            buildbst(root,preorder[i]);
        }
        return root;
    }
};