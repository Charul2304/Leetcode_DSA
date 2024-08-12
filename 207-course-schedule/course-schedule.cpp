class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        for(auto x:prerequisites){
            adj[x[0]].push_back(x[1]);
        }
        vector<int> indegree(n);
        for(int i=0;i<n;i++){
            for(auto x:adj[i]){
                indegree[x]++;
            }
        }
        queue<int> q;
        int topocount=0;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topocount++;
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return n==topocount;
    }
};