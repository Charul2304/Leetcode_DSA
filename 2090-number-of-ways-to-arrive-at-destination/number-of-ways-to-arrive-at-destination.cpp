#define ll long long
class Solution {
public:
int M=1e9+7;
    int countPaths(int n, vector<vector<int>>& roads) {
        ll src=0;
        vector<pair<ll,ll>> adj[n];
        for(auto it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
        pq.push({0,0});
        vector<ll> dist(n,LLONG_MAX);
        dist[src]=0;
        vector<ll> ways(n,0);
        ways[src]=1;
        while(!pq.empty()){
            ll dis=pq.top().first;
            ll currnode=pq.top().second;
            pq.pop();
            for(auto it:adj[currnode]){
                ll neighnode=it.first;
                ll wt=it.second;
                if(dis+wt<dist[neighnode]){
                    dist[neighnode]=dis+wt;
                    pq.push({dis+wt,neighnode});
                    ways[neighnode]=ways[currnode];
                }
                else if(dis+wt==dist[neighnode]){
                    ways[neighnode]=(ways[neighnode]+ways[currnode])%M;
                }
            }
        }
        return ways[n-1]%M;
    }
};