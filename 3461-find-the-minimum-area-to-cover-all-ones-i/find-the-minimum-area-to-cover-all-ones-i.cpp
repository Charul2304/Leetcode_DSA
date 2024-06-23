class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> ver_ind;
        vector<int> hor_ind;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ver_ind.push_back(i);
                    hor_ind.push_back(j);
                }
            }
        }
        sort(ver_ind.begin(),ver_ind.end());
        sort(hor_ind.begin(),hor_ind.end());
        return (ver_ind[ver_ind.size()-1]-ver_ind[0]+1)*(hor_ind[hor_ind.size()-1]-hor_ind[0]+1);
    }
};