class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[nonzero++]=nums[i];
            }
        }
        for(int i=nonzero;i<n;i++){
            nums[i]=0;
        }
    }
};