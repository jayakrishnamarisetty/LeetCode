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
    void rug(TreeNode* root, vector<string>& ans, string temp) {
        if (root->left == nullptr && root->right == nullptr) {
            temp += to_string(root->val);
            ans.push_back(temp);
            return;
        }
        temp += to_string(root->val) + "->";
        if (root->left) rug(root->left, ans, temp);
        if (root->right) rug(root->right, ans, temp);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if (root == nullptr) return ans;
        rug(root, ans, "");
        return ans;
    }
};