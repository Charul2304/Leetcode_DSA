class Solution {
public:
    int f(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int n=nums.size();
        int i=0,j=0;
        int count=0;
        int sum=0;
        while(j<n){
            sum+=(nums[j]%2);
            while(sum>goal){
                sum-=(nums[i]%2);
                i++;
            }
            
            count+=(j-i+1);
            j++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};