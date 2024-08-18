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
    bool check(TreeNode* root,long long int lb,long long int rb){
        if(root==NULL) return true;
        if(root->val<=lb || root->val >= rb) return false;
        return check(root->left,lb,root->val) && check(root->right,root->val,rb);
    }
    bool isValidBST(TreeNode* root) {
        long long int lb= LLONG_MIN; long long int rb= LLONG_MAX;
        return check(root,lb,rb);
    }
};