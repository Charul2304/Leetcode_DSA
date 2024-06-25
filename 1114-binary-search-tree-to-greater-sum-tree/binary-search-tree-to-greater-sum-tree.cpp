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
    void inorder(TreeNode* root,vector<int>& v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    void replaceValues(TreeNode* root,vector<int>& v){
        if(root==NULL) return;
        replaceValues(root->left,v);
        replaceValues(root->right,v);
        int sum=0;
        for(auto it:v){
            if(it>root->val){
                sum+=it;
            }
            else{
                break;
            }
        }
        root->val+=sum;
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> inorderTraversal;
        inorder(root,inorderTraversal);
        reverse(inorderTraversal.begin(),inorderTraversal.end());
        replaceValues(root,inorderTraversal);
        return root;
    }
};