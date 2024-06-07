class Solution {
public:
    //recursion method
    void f(int ind,vector<int>& nums,vector<int>& v,vector<vector<int>>& ans){
        int n=nums.size();
        if(ind==n){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[ind]);
        f(ind+1,nums,v,ans);
        v.pop_back();
        f(ind+1,nums,v,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> ans;
        f(0,nums,v,ans);
        return ans;
    }
};