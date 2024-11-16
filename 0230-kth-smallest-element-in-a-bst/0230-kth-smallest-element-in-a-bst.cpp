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
     void inOrder(TreeNode* r , vector<int>& v){
        if(r==nullptr) return;
        inOrder(r->left,v);
        v.push_back(r->val);
        inOrder(r->right,v);
     }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inOrder(root,v);
        if(k<=0 || k>v.size()) return 0;
        return v[k-1];

    }
};