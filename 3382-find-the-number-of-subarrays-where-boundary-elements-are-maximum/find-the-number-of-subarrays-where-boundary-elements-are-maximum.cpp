class Solution {
public:
    long long numberOfSubarrays(vector<int>& nums) {
        long long counter=0;
        stack<pair<int,int>> s;
        for(auto i:nums){
            while(!s.empty() && s.top().first<i) s.pop();
            if(!s.empty() && s.top().first==i){
                int freq=s.top().second;
                s.pop();
                s.push({i,freq+1});
                
            }
            else{
                s.push({i,1});
            }
            counter+=s.top().second;
        }
        return counter;
    }
};