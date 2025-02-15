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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);
         int level = 0;

        while(!q.empty()){
            level++;
            int size = q.size();
            vector<int> store;
          for(int i=0;i<size;i++){
            TreeNode* node = q.front();
            q.pop();
            store.push_back(node->val);

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
          }
          if(level % 2 == 0){
            reverse(store.begin(),store.end());
          }
          ans.push_back(store);
        }
       return ans;   
    }
};