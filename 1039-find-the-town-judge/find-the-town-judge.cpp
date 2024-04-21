class Solution {
public:
    
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> adj(n+1);
        for(auto it:trust){
            adj[it[0]].push_back(it[1]);
        }
        int node;
        for(int i=1;i<=n;i++){
            if(adj[i].size()==0){
                node=i;
            }
        }
        for(int i=1;i<=n;i++){
            if(i==node){
               continue;
            }
            else{
                if(find(adj[i].begin(),adj[i].end(),node)==adj[i].end()) return -1;
            }
        }
        return node;
    }
};