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
    int height(TreeNode* r , int& dm){
        if(r==NULL) return 0;
        int lh = height(r->left,dm);
        int rh = height(r->right,dm);
        dm = max(dm,lh+rh);
        return max(lh,rh)+1;
    }
   
    int diameterOfBinaryTree(TreeNode* root) {
        int dm = 0;
        height(root,dm);
        return dm;
    }
};