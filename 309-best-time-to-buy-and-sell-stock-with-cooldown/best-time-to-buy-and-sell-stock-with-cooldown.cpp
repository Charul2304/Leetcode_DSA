class Solution {
public:
    int f(int ind,int buy,int n,vector<int>& prices,vector<vector<int>>& dp){
        if(ind>=n) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        if(buy){
            return dp[ind][buy]=max(-prices[ind]+f(ind+1,0,n,prices,dp),f(ind+1,1,n,prices,dp));
        }
        else{
            return dp[ind][buy]=max(prices[ind]+f(ind+2,1,n,prices,dp),f(ind+1,0,n,prices,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        
        vector<vector<int>> dp(n + 2, vector<int>(2, 0));
        
        for (int ind = n - 1; ind >= 0; ind--) {
            for (int buy = 0; buy <= 1; buy++) {
                if (buy) {
                    dp[ind][buy] = max(-prices[ind] + dp[ind + 1][0], dp[ind + 1][1]);
                } else {
                    dp[ind][buy] = max(prices[ind] + dp[ind + 2][1], dp[ind + 1][0]);
                }
            }
        }
        
        return dp[0][1];
    }

};