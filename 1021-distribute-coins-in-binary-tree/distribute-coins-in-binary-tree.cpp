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
    int distributeCoins(TreeNode* root) {
        if(!root){
            return 0;
        }
        int left =0, right =0;
        if(root->left){
            left += distributeCoins(root->left);
            root->val += root->left->val - 1;
            left += abs(root->left->val - 1);
        }
        if(root->right){
            right += distributeCoins(root->right);
            root->val += root->right->val - 1;
            right += abs(root->right->val - 1);
        }
        return left+right;
    }
};