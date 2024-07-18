class Solution {
public:
    int f(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int n=nums.size();
        int i=0,j=0;
        int count=0;
        int sum=0;
        while(j<n){
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