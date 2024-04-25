class Solution {
public:
    int f(string& s,int i,int k,int last,vector<vector<int>>& dp){
        if(i==s.size()) return 0;
        if(dp[i][last]!=-1) return dp[i][last];
        if(last==26 || abs((int)(s[i]-'a')-last)<=k){
            return dp[i][last]=max(1+f(s,i+1,k,(int)(s[i]-'a'),dp),f(s,i+1,k,last,dp));
        }
        else{
            return dp[i][last]=f(s,i+1,k,last,dp);
        }
    }
    int longestIdealString(string s, int k) {
        vector<vector<int>> dp(s.size(),vector<int>(27,-1));
        return f(s,0,k,26,dp);
    }
};