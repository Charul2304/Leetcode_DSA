class Solution {
public:
vector<int>findmin(vector<int>&arr)
{
    vector<int>v(2);
    int fir=INT_MAX;
    int sec=INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<fir)
        {
            sec=fir;
            fir=arr[i];
        }
        else if(arr[i]<sec && arr[i]>=fir)
        {
            sec=arr[i];
        }     
    }
    v[0]=fir;
    v[1]=sec;
    return v;
}
int minFallingPathSum(vector<vector<int>>& grid) {
    int n=grid.size();
    for(int i=1;i<n;i++)        //iterating throgh row
    {
        vector<int>mini=findmin(grid[i-1]);
        for(int j=0;j<n;j++)
        {
            if(grid[i-1][j]==mini[0])  grid[i][j]+=mini[1];
            else grid[i][j]+=mini[0];
        }
    }
    return *min_element(grid[n-1].begin(),grid[n-1].end());
        
    }
};