class Solution {
public:

    void dfs(int row,int col,vector<vector<int>>& vis,
    vector<vector<char>>& board,int delrow[],int delcol[]){
        int n=board.size();
        int m=board[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
            !vis[nrow][ncol] && board[nrow][ncol]=='1'){
                // board[nrow][ncol]='2';
                dfs(nrow,ncol,vis,board,delrow,delcol);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        vector<vector<int>> vis(m,vector<int>(n,0));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    ans++;
                    dfs(i,j,vis,grid,delrow,delcol);
                }
            }
        }
        return ans;
    }
};