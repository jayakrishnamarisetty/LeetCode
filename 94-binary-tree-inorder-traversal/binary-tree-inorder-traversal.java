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
    public static void rug(ArrayList<Integer>ans,TreeNode root)
    {
        if(root==null) return;
        rug(ans,root.left);
        ans.add(root.val);
        rug(ans,root.right);
    }
    public List<Integer> inorderTraversal(TreeNode root) {
        ArrayList<Integer>ans=new ArrayList<>();
        if(root==null) return ans;
        rug(ans,root);
        return ans;
        
    }
}