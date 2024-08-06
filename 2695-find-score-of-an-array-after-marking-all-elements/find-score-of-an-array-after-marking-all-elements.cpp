class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        vector<int> vis(n,0);
        long long score=0;
        while(!pq.empty()){
            auto p=pq.top();
            if(!vis[p.second]){
                score+=p.first;
                vis[p.second]=1;
                if(p.second-1>=0 && !vis[p.second-1]) vis[p.second-1]=1;
                if(p.second+1<n && !vis[p.second+1]) vis[p.second+1]=1;
            }
            pq.pop();
        }
        return score;
        
    }
};