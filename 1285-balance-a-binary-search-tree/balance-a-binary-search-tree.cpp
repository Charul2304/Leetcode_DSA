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
    TreeNode* inorderToBST(int s,int e,vector<int>& v){
        if(s>e){
            return NULL;
        }
        int mid=(s+e)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=inorderToBST(s,mid-1,v);
        root->right=inorderToBST(mid+1,e,v);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nodes;
        inorder(root,nodes);
        TreeNode* temp=inorderToBST(0,nodes.size()-1,nodes);
        return temp;
    }
};