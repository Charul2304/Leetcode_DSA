class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows;
        vector<int> cols;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        for(auto x:rows){
            for(int i=0;i<n;i++){
                matrix[x][i]=0;
            }
        }
        for(auto x:cols){
            for(int i=0;i<m;i++){
                matrix[i][x]=0;
            }
        }
    }
};