class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int> topo;
        vector<int> indegree(n,0);
        vector<int> adj[n];
        for(auto x:prerequisites){
            adj[x[0]].push_back(x[1]);
        }
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto x:adj[node]){
                indegree[x]--;
                if(indegree[x]==0) q.push(x);
            }
        }
        if(topo.size()!=n) return {};
        reverse(topo.begin(),topo.end());
        return topo;
    }
};