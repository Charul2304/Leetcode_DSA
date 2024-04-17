class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];
        for(auto it:times){
            adj[it[0]].push_back({it[1],it[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k});
        vector<int> dist(n+1,1e9);
        dist[k]=0;
        while(!pq.empty()){
            auto it=pq.top();
            int time=it.first;
            int node=it.second;
            pq.pop();
            for(auto x:adj[node]){
                int neighnode=x.first;
                int neightime=x.second;
                if(neightime+time < dist[neighnode]){
                    dist[neighnode]=neightime+time;
                    pq.push({neightime+time,neighnode});
                }
            }
        }
        int mx = *max_element (dist.begin()+1 ,dist.end());
        return mx == 1e9 ? -1 : mx;
    }
};