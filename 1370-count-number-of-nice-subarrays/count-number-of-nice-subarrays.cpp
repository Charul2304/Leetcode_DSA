class Solution {
public:

    int f(vector<int>& nums, int goal){
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
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
    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};