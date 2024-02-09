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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return{};
        vector<vector<int>>rug;
        queue<TreeNode*>r;
        r.push(root);
        while(!r.empty()){
            int n=r.size();
            vector<int>ans;
            for(int i=0;i<n;i++){
                TreeNode *nn=r.front();
                if(nn->left!=NULL)  r.push(nn->left);
                if(nn->right!=NULL) r.push(nn->right);
                ans.push_back(nn->val);
                r.pop();
            }
            rug.push_back(ans);
        }
        return rug;
    }
};