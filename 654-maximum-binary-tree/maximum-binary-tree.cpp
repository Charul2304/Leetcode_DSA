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
    TreeNode* build(vector<int>& nums,int start,int end,map<int,int>& mp){
        if(start>end) return NULL;
        auto maxIt = max_element(nums.begin() + start, nums.begin() + end + 1);
        int rootValue = *maxIt;
        TreeNode* root=new TreeNode(rootValue);
        int pos=mp[root->val];
        root->left=build(nums,start,pos-1,mp);
        root->right=build(nums,pos+1,end,mp);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        return build(nums,0,nums.size()-1,mp);
    }
};