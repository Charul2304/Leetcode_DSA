class Solution {
public:
    int dr[4]={0,1,0,-1};
    int dc[4]={-1,0,1,0};
    void dfs(int row,int col,vector<vector<char>>& board,vector<vector<int>>& vis){
        int m=board.size();
        int n=board[0].size();
        vis[row][col]='O';
        for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !vis[nrow][ncol] && board[nrow][ncol]=='O'){
                dfs(nrow,ncol,board,vis);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<n;i++){
            if(board[0][i]=='O' && !vis[0][i]) dfs(0,i,board,vis);
            if(board[m-1][i]=='O' && !vis[m-1][i]) dfs(m-1,i,board,vis);
        }
        for(int i=0;i<m;i++){
            if(board[i][0]=='O' && !vis[i][0]) dfs(i,0,board,vis);
            if(board[i][n-1]=='O' && !vis[i][n-1]) dfs(i,n-1,board,vis);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && !vis[i][j]){
                    board[i][j]='X';
                }
            }
        }
    }
};