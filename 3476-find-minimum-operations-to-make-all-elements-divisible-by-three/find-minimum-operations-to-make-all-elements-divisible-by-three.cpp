class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==1) ans+=1;
            else if(nums[i]%3==2) ans+=1;
            else if(nums[i]%3!=0){
                ans+=nums[i]%3;
            }
        }
        return ans;
    }
};