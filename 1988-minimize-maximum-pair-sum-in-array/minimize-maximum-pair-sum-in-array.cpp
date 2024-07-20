class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans=INT_MIN;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<n/2){
            ans=max(ans,nums[i]+nums[j]);
            i++;
            j--;
        }
        return ans;
    }
};