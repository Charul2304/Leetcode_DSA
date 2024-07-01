class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        long long ans=0;
        for(auto x:gifts){
            pq.push(x);
        }
        while(k--){
            long long f=floor(sqrt(pq.top()));
            pq.pop();
            pq.push(f);
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};