class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        int ans=0;
        for(auto x:mp){
            if(x.second==edges.size()){
                ans=x.first;
                break;
            }
        }
        return ans;
    }
};