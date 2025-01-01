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
    void dfs(TreeNode* root , string str , vector<string> &ans){
        str += to_string(root->val);

        if(root->left == NULL && root->right == NULL){
            ans.push_back(str);
        }
        str+= "->";
        if(root->left){
            dfs(root->left,str,ans);
        }
        if(root->right){
            dfs(root->right,str,ans);
        }
        str.pop_back();
    }
 
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root==NULL)
        return ans;

        dfs(root,"",ans);
        return ans;
    }
};