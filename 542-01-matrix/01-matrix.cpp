class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> dist(m,vector<int>(n,0));
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int row=p.first.first;
            int col=p.first.second;
            int dis=p.second;
            dist[row][col]=dis;
            for(int i=0;i<4;i++){
                int nrow=row+dr[i];
                int ncol=col+dc[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && mat[nrow][ncol] && !vis[nrow][ncol]){
                    q.push({{nrow,ncol},dis+1});
                    vis[nrow][ncol]=1;
                }
            }
        }
        return dist;
    }
};