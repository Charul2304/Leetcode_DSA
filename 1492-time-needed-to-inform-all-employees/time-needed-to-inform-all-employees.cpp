class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        if(n==1) return 0;
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            if(manager[i]==-1){
                continue;
            }
            else{
                adj[manager[i]].push_back(i);
            }
        }
        vector<int> sum(n,0);
        queue<int> q;
        sum[headID]=0;
        q.push(headID);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                q.push(it);
                sum[it]=sum[node]+informTime[node];
            }
        }
        return *max_element(sum.begin(),sum.end());
        
    }
};