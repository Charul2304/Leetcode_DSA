class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()||matrix[0].empty()) return 0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<int> heights(cols+1,0);
        int maxarea=0;
        for(auto row:matrix){
            for(int i=0;i<cols;i++){
                heights[i]=(row[i]=='1')?heights[i]+1:0;
            }

            int n=heights.size();

            for(int i=0;i<n;i++){
                for(int j=i,minheight=INT_MAX;j<n;j++){
                    minheight=min(minheight,heights[j]);
                    int area=minheight*(j-i+1);
                    maxarea=max(maxarea,area);
                }
            }
        }
        return maxarea;
    }
};