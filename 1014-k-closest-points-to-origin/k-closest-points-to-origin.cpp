class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;
        for(auto arr:points){
            int cal=abs(arr[0]*arr[0])+abs(arr[1]*arr[1]);
            pq.push({cal,{arr[0],arr[1]}});
            if(pq.size()>k){
                pq.pop();
            }
           
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};