class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int cost=target-nums[i];
            if(mp.find(cost)!=mp.end()){
                return {mp[cost],i};
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};