class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string> mp;
        for(auto x:paths){
            mp[x[0]]=x[1];
        }
        for(int i=0;i<paths.size();i++){
            for(int j=0;j<2;j++){
                if(mp.find(paths[i][j])==mp.end()){
                    return paths[i][j];
                }
            }
        }
        return "";
    }
};