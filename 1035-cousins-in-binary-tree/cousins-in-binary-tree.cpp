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
    bool isCousins(TreeNode* root, int x, int y) {
        int mini=min(x,y);
        int maxi=max(x,y);
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            bool flag1=false;
            bool flag2=false;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->val==mini){
                    flag1=true;
                }
                if(node->val==maxi){
                    flag2=true;
                }
                if(node->left && node->right){
                    if((node->left->val==x && node->right->val==y) ||
                    (node->left->val==y && node->right->val==x)) return false;
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(flag1 && flag2) return true;
        }
        return false;
    }
};