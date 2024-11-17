/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;

        int crnt = root->val;

        if(crnt < p->val && crnt <q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        if(crnt > p->val && crnt > q->val){
            return  lowestCommonAncestor(root->left,p,q);
        }
        return root;
    }
};