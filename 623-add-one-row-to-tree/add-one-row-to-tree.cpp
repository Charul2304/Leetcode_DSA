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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*> q;
        TreeNode* newnode=new TreeNode(val);
        if(depth==1){
            newnode->left=root;
            return newnode;
        }
        int currlevel=2;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            if(currlevel==depth){
                for(int i=0;i<size;i++){
                    TreeNode* curr=q.front();
                    TreeNode* newnode1=new TreeNode(val);
                    TreeNode* newnode2=new TreeNode(val);
                    q.pop();
                    if(curr->left) newnode1->left=curr->left;
                    if(curr->right) newnode2->right=curr->right;
                    curr->left=newnode1;
                    curr->right=newnode2;
                }
                break;
            }
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            currlevel++;
        }
        return root;
    }
};