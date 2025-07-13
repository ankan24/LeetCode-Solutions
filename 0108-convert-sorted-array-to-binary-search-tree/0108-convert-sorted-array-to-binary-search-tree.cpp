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
    TreeNode* bst(vector<int>& n , int l , int r){
        if(l>r) return NULL;
        int m = (l+r)/2;
        TreeNode* newNode = new TreeNode(n[m]);
        newNode->left = bst(n,l,m-1);
        newNode->right = bst(n,m+1,r);
        return newNode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return bst(nums,0,nums.size()-1);
    }
};