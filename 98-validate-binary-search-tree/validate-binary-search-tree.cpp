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
    bool check(TreeNode* root,long long int lb,long long int ub){
        if(root==NULL) return true;
        if(root->val<=lb || root->val>=ub) return false;
        return check(root->left,lb,root->val) && check(root->right,root->val,ub);
    }
    bool isValidBST(TreeNode* root) {
        long long int lb=LLONG_MIN;
        long long int ub=LLONG_MAX;
        return check(root,lb,ub);
    }
};