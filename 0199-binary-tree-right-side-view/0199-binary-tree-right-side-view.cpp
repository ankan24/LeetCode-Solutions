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
   void rightview(TreeNode* root ,int lev, vector<int>& ans){
      if(root==NULL) return;
      
      if(lev == ans.size()) ans.push_back(root->val);

        rightview(root->right,lev+1,ans);
        rightview(root->left,lev+1,ans);
   }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return {};
        int lev = 0;
        ans.push_back(root->val);
        rightview(root,lev,ans);
        return ans;
    }
};