class Solution {
public:
    int f(vector<int>& nums, int goal){
        int i=0,j=0,sum=0,count=0;
        if(goal<0) return 0;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>goal){
                sum-=nums[i];
                i++;
            }
            count+=(j-i+1);
            j++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return f(nums,goal)-f(nums,goal-1);
    }
};