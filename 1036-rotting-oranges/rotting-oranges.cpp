class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
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
        int tm=0;
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int r=p.first.first;
            int c=p.first.second;
            int t=p.second;
            tm=max(t,tm);
            for(int i=0;i<4;i++){
                int nrow=dr[i]+r;
                int ncol=dc[i]+c;
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n &&
                vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]==1) return -1;
            }
        }
        return tm;
    }
};