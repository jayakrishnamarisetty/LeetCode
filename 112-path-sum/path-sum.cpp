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
    bool rug(TreeNode* node, int targetSum) {
        if(node == NULL) return false;
        if(node->val == targetSum && node->left == NULL && node->right == NULL) return true;
        return rug(node->left, targetSum - node->val) ||
               rug(node->right, targetSum - node->val);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return NULL;
        return rug(root, targetSum);
    }
};