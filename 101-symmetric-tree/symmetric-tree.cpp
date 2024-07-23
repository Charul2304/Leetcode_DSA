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
    bool solve(TreeNode* leftn, TreeNode* rightn) {
        if (leftn == NULL || rightn == NULL) return leftn == rightn;
        if (leftn->val != rightn->val) return false;
        return solve(leftn->left, rightn->right) && solve(leftn->right, rightn->left);
    }

    bool isSymmetric(TreeNode* root) {
        return root == NULL || solve(root->left, root->right);
    }
};
