class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>& board,vector<vector<int>>& vis,int drow[],int dcol[]){
        int m=board.size();
        int n=board[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n &&
             !vis[nrow][ncol] && board[nrow][ncol]=='O'){
                dfs(nrow,ncol,board,vis,drow,dcol);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        for(int i=0;i<m;i++){
            if(board[i][0]=='O' && !vis[i][0]) dfs(i,0,board,vis,drow,dcol);
            if(board[i][n-1]=='O' && !vis[i][n-1]) dfs(i,n-1,board,vis,drow,dcol);
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='O' && !vis[0][i]) dfs(0,i,board,vis,drow,dcol);
            if(board[m-1][i]=='O' && !vis[m-1][i]) dfs(m-1,i,board,vis,drow,dcol);
        }
    
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<vis[i][j]<<" ";
            }
            cout<<endl;
        }

    }
};
