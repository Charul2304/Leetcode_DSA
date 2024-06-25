class Solution {
public:
    int f(int ind,vector<int>& coins,int target,vector<vector<int>>& dp){
        if(ind==0){
            if(target%coins[0]==0) return 1;
            else return 0;
        }
        if(dp[ind][target]!=-1) return dp[ind][target];
        int notpick=f(ind-1,coins,target,dp);
        int pick=0;
        if(coins[ind]<=target) pick=f(ind,coins,target-coins[ind],dp);
        return dp[ind][target]=notpick+pick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return f(n-1,coins,amount,dp);
    }
};