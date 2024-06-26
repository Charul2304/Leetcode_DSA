class Solution {
public:
    int f(int i,int j,string& str1,string& str2,vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(str1[i]==str2[j]) return dp[i][j]=1+f(i-1,j-1,str1,str2,dp);
        return dp[i][j]=max(f(i-1,j,str1,str2,dp),f(i,j-1,str1,str2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(n-1,m-1,text1,text2,dp);
    }
};