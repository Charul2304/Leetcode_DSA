class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int cost=target-nums[i];
            if(mp.find(cost)!=mp.end()){
                return {mp[cost],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};