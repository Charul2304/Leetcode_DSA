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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        long long maxWidth=0;
        long long mod=1e11;
        while(!q.empty()){
            int size=q.size();
            long long l=q.front().second;
            long long r=q.back().second;
            maxWidth=max(maxWidth,r-l+1);
            for(int i=0;i<size;i++){
                auto p=q.front();
                q.pop();
                TreeNode* node=p.first;
                long long indx=p.second;
                if(node->left){
                    q.push({node->left,(2*indx+1)%mod});
                }
                if(node->right){
                    q.push({node->right,(2*indx+2)%mod});
                }
            }
        }
        return maxWidth;
    }
};