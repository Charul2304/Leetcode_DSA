class Solution {
public:
    bool f(int ind,int target,vector<int>& nums,vector<vector<int>>& dp){
        if(target==0) return true;
        if(ind==0) return nums[0]==target;
        if(dp[ind][target]!=-1) return dp[ind][target];
        bool nottake=f(ind-1,target,nums,dp);
        bool take=false;
        if(nums[ind]<=target){
            take=f(ind-1,target-nums[ind],nums,dp);
        }
        return dp[ind][target]=nottake||take;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        if(sum%2==1){
            return false;
        }
        else{
            int k=sum/2;
            vector<vector<int>> dp(n,vector<int>(k+1,-1));
            return f(n-1,k,nums,dp);
        }
        
    }
};