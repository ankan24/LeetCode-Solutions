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
    TreeNode* helper(vector<int> &n , int l , int r){
        if(l > r) return NULL;
        int m = l+(r-l)/2;
        TreeNode* root = new TreeNode(n[m]);
        root->left = helper(n,l,m-1);
        root->right = helper(n,m+1,r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        return helper(nums,l,r);
    }
};