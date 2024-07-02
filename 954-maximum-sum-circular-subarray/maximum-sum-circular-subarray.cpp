class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curmax=0;
        int curmin=0;
        int maxsum=nums[0];
        int minsum=nums[0];
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            curmax=max(curmax,0)+nums[i];
            maxsum=max(maxsum,curmax);
            curmin=min(curmin,0)+nums[i];
            minsum=min(minsum,curmin);
            totalsum+=nums[i];
        }
        if(totalsum==minsum) return maxsum;
        return max(maxsum,totalsum-minsum);
    }
};