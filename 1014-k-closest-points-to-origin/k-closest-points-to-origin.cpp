class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> pq;
        int n=points.size();
        for(int i=0;i<n;i++){
            int dist=abs(points[i][0])*abs(points[i][0])+abs(points[i][1])*abs(points[i][1]);
            pq.push({dist,points[i]});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};