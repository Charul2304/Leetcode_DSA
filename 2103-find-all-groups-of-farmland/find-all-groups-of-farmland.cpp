class Solution {
public:
    void dfs(int row,int col,int& row1,int& col1,vector<vector<int>>& vis,
    vector<vector<int>>& board){
        int n=board.size();
        int m=board[0].size();
        vis[row][col]=1;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
            !vis[nrow][ncol] && board[nrow][ncol]==1){
                row1=max(row1,nrow);
                col1=max(col1,ncol);
                dfs(nrow,ncol,row1,col1,vis,board);
            }
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        int m=land.size();
        int n=land[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && land[i][j]==1){
                    int row1=i,col1=j;
                    dfs(i,j,row1,col1,vis,land);
                    ans.push_back({i,j,row1,col1});
                }
            }
        }
        return ans;
    }
};