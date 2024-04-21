class Solution {
public:
    void dfs(int vertex,vector<vector<int>>& edges,vector<int>& vis){
        vis[vertex]=1;
        for(auto x:edges[vertex]){
            if(!vis[x]){
                dfs(x,edges,vis);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>> graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n,0);
        dfs(source,graph,vis);
        return vis[destination]==1;
    }
};