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
    int path(TreeNode *root,int &maxpath){
        if(root==NULL)return 0;
        
        int left=max(0,path(root->left,maxpath));
        int right=max(0,path(root->right,maxpath));
        maxpath=max(maxpath,root->val+left+right);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        int maxpath=INT_MIN;
        path(root,maxpath);
        return maxpath;
    }
};
