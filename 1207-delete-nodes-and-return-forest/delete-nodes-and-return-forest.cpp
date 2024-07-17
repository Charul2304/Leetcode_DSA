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
    vector<TreeNode*> ans;
    unordered_set<int> st;
    void deleteNode(TreeNode*& root){
        if(root==NULL) return;
        deleteNode(root->left);
        deleteNode(root->right);
        if(st.find(root->val)!=st.end()){
            if(root->left) ans.push_back(root->left);
            if(root->right) ans.push_back(root->right);
            delete root;
            root=NULL;
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(auto i:to_delete){
            st.insert(i);
        }
        deleteNode(root);
        if(root) ans.push_back(root);
        return ans;
    }
};