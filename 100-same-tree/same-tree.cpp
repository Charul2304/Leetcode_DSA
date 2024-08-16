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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p!=NULL && q==NULL) return false;
        if(p==NULL && q!=NULL) return false;
        if(p==NULL && q==NULL) return true;
        bool value=p->val==q->val;
        bool left=isSameTree(p->left,q->left);
        bool right=isSameTree(p->right,q->right);
        if(value && left && right){
            return true;
        }
        else{
            return false;
        }
    }
};