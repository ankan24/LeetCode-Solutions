/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int minDepth(TreeNode root) {
        if(root == null) return 0;

        int leftSub = minDepth(root.left);
        int rightSub = minDepth(root.right);

        if(leftSub == 0) return 1+rightSub;
        if(rightSub == 0) return 1+leftSub;

        return 1+Math.min(leftSub,rightSub);
    }
}