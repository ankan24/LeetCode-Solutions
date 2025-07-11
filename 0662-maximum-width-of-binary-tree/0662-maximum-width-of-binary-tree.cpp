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
    int widthOfBinaryTree(TreeNode* root) {
        long long ans = 0;
        if(!root) return 0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        while(!q.empty()){
            int n = q.size();
            long long l = q.front().second;
            long long r = q.back().second;
            ans = max(ans,r-l+1);
            for(int i=0;i<n;i++){
                auto f = q.front();
                TreeNode* t = f.first;
                long long idx = f.second -l;
                q.pop();
                if(t->left) q.push({t->left, 2*idx+1});
                if(t->right) q.push({t->right, 2*idx+2});
            }
        }
        return ans;
    }
};