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
   TreeNode* marge(TreeNode* r1, TreeNode* r2){
          if(!r1 && !r2) return NULL;

          if(r1!=NULL && r2==NULL) return r1;

          if(r2!=NULL && r1==NULL) return r2;

          TreeNode* sum = new TreeNode(r1->val+r2->val);
          sum->left = marge(r1->left,r2->left);
          sum->right = marge(r1->right,r2->right);

          return sum;
   }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return marge(root1,root2);
    }
};