class Solution {
public:
    int f(int i,int j,vector<vector<int>>& matrix,int m,vector<vector<int>>& dp){
        if(j<0 || j>=m) return 1e9;
        if(i==0) return matrix[0][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int s=matrix[i][j]+f(i-1,j,matrix,m,dp);
        int ld=matrix[i][j]+f(i-1,j-1,matrix,m,dp);
        int rd=matrix[i][j]+f(i-1,j+1,matrix,m,dp);
        return dp[i][j]=min(s,min(ld,rd));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int s=matrix[i][j]+dp[i-1][j];
                int ld=0;
                if(j>0) ld=matrix[i][j]+dp[i-1][j-1];
                else ld=matrix[i][j]+1e9;
                int rd=0;
                if(j<n-1) rd=matrix[i][j]+dp[i-1][j+1];
                else rd=matrix[i][j]+1e9;
                dp[i][j]=min(s,min(ld,rd));
            }
        }
        for(int i=0;i<n;i++){
            int temp=dp[n-1][i];
            ans=min(ans,temp);
        }
        return ans;
    }
};