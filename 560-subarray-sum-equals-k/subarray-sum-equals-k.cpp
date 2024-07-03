class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int presum=0;
        int ans=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            int remove=presum-k;
            ans+=mp[remove];
            mp[presum]+=1;
        }
        return ans;
    }
};