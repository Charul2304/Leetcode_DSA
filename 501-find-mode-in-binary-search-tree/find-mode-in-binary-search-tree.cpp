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
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        map<int,int> m;
        vector<int> v;
        inorder(root,v);
        if(v.size()<=1) return v;
        for(auto x:v){
            m[x]++;
        }
        int max=0;
        for(auto x:m){
            if(x.second>max){
                max=x.second;
            }
        }
        for(auto x:m){
            if(x.second==max){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};