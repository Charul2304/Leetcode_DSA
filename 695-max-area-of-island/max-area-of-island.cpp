class Solution {
public:
    int dfs(int row,int col,vector<vector<int>>& vis,
    vector<vector<int>>& grid,int delrow[],int delcol[]){
        int n=grid.size();
        int m=grid[0].size();
        int count=1;
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
            !vis[nrow][ncol] && grid[nrow][ncol]==1){
                
                count+=dfs(nrow,ncol,vis,grid,delrow,delcol);
                
            }
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<int>> vis(m,vector<int>(n,0));
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    //int count=0;
                    ans=max(ans,dfs(i,j,vis,grid,delrow,delcol));
                }
            }
        }
        return ans;
    }
};