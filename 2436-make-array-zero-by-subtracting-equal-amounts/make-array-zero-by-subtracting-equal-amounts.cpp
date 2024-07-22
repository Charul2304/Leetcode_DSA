class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto x:nums){
            if(x>0) pq.push(x);
        }
        while(!pq.empty()){
            int mini=pq.top();
            pq.pop();
            nums.clear();
            while(!pq.empty()){
                int k=pq.top();
                pq.pop();
                nums.push_back(k-mini);
            }
            for(auto i:nums){
                if(i>0) pq.push(i);
            }
            ans++;
        }
        return ans;
    }

};