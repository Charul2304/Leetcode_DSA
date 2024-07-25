class Solution {
public:
    int dr[4]={-1,0,1,0};
    int dc[4]={0,1,0,-1};
    void dfs(int row,int col,vector<vector<int>>& image,
    int color,int inicolor,vector<vector<int>>& ans){
        int m=image.size();
        int n=image[0].size();
        ans[row][col]=color;
        for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && 
            image[nrow][ncol]==inicolor && ans[nrow][ncol]!=color){
                dfs(nrow,ncol,image,color,inicolor,ans);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;
        int m=image.size();
        int n=image[0].size();
        int inicolor=image[sr][sc];
        dfs(sr,sc,image,color,inicolor,ans);
        return ans;
    }
};