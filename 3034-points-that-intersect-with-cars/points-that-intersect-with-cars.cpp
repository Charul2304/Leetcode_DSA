class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> temp;
        int maxi=0;
        for(auto x:nums){
            temp.push_back(x[0]);
            temp.push_back(x[1]);
        }
        maxi=*max_element(temp.begin(),temp.end());
        vector<int> vis(maxi,0);
        for(auto x:nums){
            for(int i=x[0]-1;i<x[1];i++){
                vis[i]=1;
            }
        }
        int count=0;
        for(int i=0;i<maxi;i++){
            if(vis[i]==1){
                count++;
            }
        }
        return count;
    }
};