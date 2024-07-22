class Solution {
public:
    bool static cmp(vector<int>&t1, vector<int>&t2){
        return t1[1]<t2[1];
    }
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(trips.begin(),trips.end(),cmp);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int count=0;
        for(auto x:trips){
            while(!pq.empty() && pq.top().first<=x[1]){
                count-=pq.top().second;
                pq.pop();
            }
            count+=x[0];
            if(count>capacity) return false;
            pq.push({x[2],x[0]});

        }
        return true;
    }
};