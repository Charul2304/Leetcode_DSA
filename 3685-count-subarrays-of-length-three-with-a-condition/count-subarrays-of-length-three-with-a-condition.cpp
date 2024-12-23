class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i=0,j=2;
        int n=nums.size();
        int count=0;
        while(j<n){
            int sum=nums[i]+nums[j];
            if(nums[i+1]==2*sum) count++;
            i++;
            j++;
        }
        return count;
    }
};