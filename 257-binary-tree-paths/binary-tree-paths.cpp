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
    void solve(TreeNode* root,string s,vector<string>& v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
           s+=to_string(root->val);
        }
        else s+=to_string(root->val)+"->";
        solve(root->left,s,v);
        if(root->left==NULL && root->right==NULL){
            v.push_back(s);
            s="";
        }
        solve(root->right,s,v);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        solve(root,s,ans);
        return ans;
    }
};