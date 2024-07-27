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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL) return 1;
        queue<TreeNode*> q;
        q.push(root);
        int maxsum=INT_MIN;
        int ans=1,count=0;
        while(!q.empty()){
            int size=q.size();
            int sum=0;
            count++;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                sum+=node->val;
            }
            
            if(sum>maxsum){
                maxsum=sum;
                ans=count;
            }
        }
        return ans;
    }
};