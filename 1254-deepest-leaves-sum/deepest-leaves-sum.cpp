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
    void levelorder(TreeNode* root,vector<vector<int>>& ans){
        if(!root) return;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                level.push_back(temp->val);
            }
            ans.push_back(level);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        if(!root) return 0;
        vector<vector<int>> ans;
        levelorder(root,ans);
        int sum=0;
        int n=ans.size();
        for(int i=0;i<ans[n-1].size();i++){
            sum+=ans[n-1][i];
        }
        return sum;
    }
};