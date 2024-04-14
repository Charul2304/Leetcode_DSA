class Solution {
public:
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        unordered_map<int,vector<pair<int,int>>> adj;
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            int wt=x[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> ans(n,-1);
        vector<int> visited(n,0);
        pq.push({0,0});
        ans[0]=0;
        while(!pq.empty()){
            auto toppair=pq.top();
            pq.pop();
            int currwt=toppair.first;
            int currnode=toppair.second;
            if(visited[currnode]) continue;
            visited[currnode]=1;
            for(auto nbr:adj[currnode]){
                int newwt=currwt+nbr.second;
                if(newwt<disappear[nbr.first] && (ans[nbr.first]==-1 || newwt<ans[nbr.first])){
                    pq.push({newwt,nbr.first});
                    ans[nbr.first]=newwt;
                }
            }
        }
        return ans;
        
    }
};