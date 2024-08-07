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
    TreeNode* solve(vector<int>& inorder,int is,int ie,vector<int>& postorder,int ps,int pe,map<int,int>& mp){
        if(is>ie || ps>pe || inorder.size()!=postorder.size()){
            return NULL;
        }
        TreeNode* root=new TreeNode(postorder[pe]);
        int inRoot=mp[root->val];
        int numLeft=inRoot-is;
        root->left=solve(inorder,is,inRoot-1,postorder,ps,ps+numLeft-1,mp);
        root->right=solve(inorder,inRoot+1,ie,postorder,ps+numLeft,pe-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()) return NULL;
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root=solve(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        return root;
    }
};