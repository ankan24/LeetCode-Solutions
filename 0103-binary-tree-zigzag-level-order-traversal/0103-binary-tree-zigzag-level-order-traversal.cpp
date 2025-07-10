/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        int lev = 0;
        while (!q.empty()) {
            vector<int> st;
            int n = q.size();

            for (int i = 0; i < n; i++) {
                TreeNode* t = q.front();
                q.pop();
                st.push_back(t->val);
                if (t->left)
                    q.push(t->left);
                if (t->right)
                    q.push(t->right);
            }

            if (lev % 2 != 0) {
                reverse(st.begin(), st.end());
            }
            lev++;
            ans.push_back(st);
        }
        return ans;
    }
};