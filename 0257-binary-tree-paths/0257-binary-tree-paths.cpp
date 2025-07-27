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
    void dfs(TreeNode* root , vector<string> &arr, string path){
          path += to_string(root->val);

          if(root->left==NULL && root->right==NULL){
            arr.push_back(path);
          }
          path += "->";
          if(root->left) dfs(root->left,arr,path);
          if(root->right) dfs(root->right,arr,path);
      path.pop_back();   
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string> ans;
       if(!root) return ans;
       string path="";
       dfs(root,ans,path);
       return ans;
    }
};