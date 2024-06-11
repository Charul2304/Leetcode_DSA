class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<int,vector<int>> rowmap;
        map<int,vector<int>> colmap;
        int n=grid.size();
        
        for(int i=0;i<n;i++){
            rowmap[i]=grid[i];
        }
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                temp.push_back(grid[j][i]);
            }
            colmap[i]=temp;
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(rowmap[i]==colmap[j]){
                    count++;
                }
            }
        }
        return count;
    }
};