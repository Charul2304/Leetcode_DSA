class Solution {
public:
    int f(int ind,int target,vector<int>& coins,vector<vector<int>>& dp){
        if(ind==0){
            if(target%coins[ind]==0) return target/coins[ind];
            else return 1e9;
        }
        if(dp[ind][target]!=-1) return dp[ind][target];
        int notpick=f(ind-1,target,coins,dp);
        int pick=1e9;
        if(coins[ind]<=target){
            pick=1+f(ind,target-coins[ind],coins,dp);
        }
        return dp[ind][target]=min(notpick,pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        for(int i=0;i<=amount;i++){
            if(i%coins[0]==0) dp[0][i]=i/coins[0];
            else dp[0][i]=1e9;
        }
        for(int ind=1;ind<n;ind++){
            for(int target=0;target<=amount;target++){
                int notpick=dp[ind-1][target];
                int pick=1e9;
                if(coins[ind]<=target){
                    pick=1+dp[ind][target-coins[ind]];
                }
                dp[ind][target]=min(notpick,pick);
            }
        }
        int ans=dp[n-1][amount];
        if(ans>=1e9) return -1;
        else return ans;
    }
};