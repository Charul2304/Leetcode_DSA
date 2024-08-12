class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        for(auto x:prerequisites){
            adj[x[0]].push_back(x[1]);
        }
        vector<int> indegree(n,0);
        queue<int> q;
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int> toposort;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            toposort.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        if(toposort.size()!=n) return {};
        reverse(toposort.begin(),toposort.end());
        return toposort;
    }
};