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
    void solve(TreeNode* root,int sum, int target,vector<vector<int>>& ans,vector<int> ds){
        if(root==NULL) return;
        sum+=root->val;
        ds.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==target){
                ans.push_back(ds);
                return;
            }
            return;
        }
        solve(root->left,sum,target,ans,ds);
        solve(root->right,sum,target,ans,ds);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> ds;
        int sum=0;
        solve(root,sum,targetSum,ans,ds);
        return ans;
    }
};