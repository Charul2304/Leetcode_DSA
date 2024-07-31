class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto x:nums){
            pq.push(x);
        }
        int ans=0;
        while(k--){
            int num=pq.top();
            pq.pop();
            ans+=num;
            pq.push(num+1);
        }
        return ans;
    }
};