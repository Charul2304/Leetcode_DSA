class Solution {
public: 
    int returnSum(int num){
        int ans=0;
        while(num){
            ans+=(num%10);
            num/=10;
        }
        return ans;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int elesum=0;
        for(int i=0;i<n;i++){
            elesum+=returnSum(nums[i]);
        }
        return abs(sum-elesum);
    }
};