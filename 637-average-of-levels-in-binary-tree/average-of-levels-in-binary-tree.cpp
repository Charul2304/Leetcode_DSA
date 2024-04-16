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
    double average(vector<double>& v){
        double sum=0;
        for(auto x:v){
            sum+=x;
        }
        double size=v.size();
        double ans=sum/size;
        return ans;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<double> level;
           
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
            double num=average(level);
            ans.push_back(num);
        }
        return ans;
    }
};