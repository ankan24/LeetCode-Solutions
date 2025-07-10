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
    int maxDepth(TreeNode* root) {
        int ans = 0;
        queue<TreeNode*> q;
        if(!root) return 0;
        q.push(root);
        while(!q.empty()){
            ans++;
            int n = q.size();
            for(int i=0;i<n;i++){
            TreeNode* t = q.front();
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
            }
        }
        return ans;
    }
};