class Solution {
public:
    int f(vector<int>& nums, int k){
        int count=0;
        int sum=0;
        int i=0,j=0;
        int n=nums.size();
        while(j<n){
            sum+=(nums[j]%2);
            while(sum>k){
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