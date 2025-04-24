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
    bool findSum(TreeNode* root , int sum , int targetSum){
        if(!root) return false;
        sum += root->val;

        if(!root->left && !root->right){
            return sum == targetSum;
        }

        int l = findSum(root->left,sum,targetSum);
        int r = findSum(root->right,sum,targetSum);
      return  l || r;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
         int sum = 0;
         bool ans = findSum(root , sum , targetSum);
        return ans;
    }
};