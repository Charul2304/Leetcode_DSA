class Solution {
public:
    int f(int ind,int buy,int cap,vector<int>& prices,int n,vector<vector<vector<int>>>& dp){
        if(cap==0 || ind==n) return 0;
        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        if(buy){
            return dp[ind][buy][cap]=max(-prices[ind]+f(ind+1,0,cap,prices,n,dp),f(ind+1,1,cap,prices,n,dp));
        }
        else{
            return dp[ind][buy][cap]=max(prices[ind]+f(ind+1,1,cap-1,prices,n,dp),f(ind+1,0,cap,prices,n,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(0,1,2,prices,n,dp);
    }
};