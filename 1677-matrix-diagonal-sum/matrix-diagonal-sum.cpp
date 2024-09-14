class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            vis[i][i]=1;
        }
        for(int i=0;i<n;i++){
            if(!vis[i][n-i-1]){
                sum+=mat[i][n-i-1];
            }
        }
        return sum;
    }
};