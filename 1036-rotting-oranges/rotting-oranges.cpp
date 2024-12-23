class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int tm=0;
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int dr[4]={0,1,0,-1};
        int dc[4]={-1,0,1,0};
        while(!q.empty()){
            auto p=q.front();
            int row=p.first.first;
            int col=p.first.second;
            int t=p.second;
            q.pop();
            tm=max(tm,t);
            for(int i=0;i<4;i++){
                int nrow=row+dr[i];
                int ncol=col+dc[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n &&
                grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                    grid[nrow][ncol]=2;
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return tm;
    }
};