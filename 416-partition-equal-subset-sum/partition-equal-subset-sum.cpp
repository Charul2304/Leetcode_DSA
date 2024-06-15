class Solution {
public:
    bool f(int ind,int k,vector<int>& nums,vector<vector<int>>& dp){
        if(k==0) return true;
        if(ind==0) return nums[0]==k;
        if(dp[ind][k]!=-1) return dp[ind][k];
        bool nottake=f(ind-1,k,nums,dp);
        bool take=false;
        if(nums[ind]<=k){
            take=f(ind-1,k-nums[ind],nums,dp);
        }
        return dp[ind][k]=nottake || take;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        int k=sum/2;
        vector<vector<int>> dp(n,vector<int>(k+1,-1));
        
        if(sum%2==1) return false;
        else return f(n-1,k,nums,dp);
    }
};