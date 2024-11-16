class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int swap_ind1=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                swap_ind1=i-1;
                break;
            }
        }
        
        if(swap_ind1!=-1){
            int swap_ind2=-1;
            for(int i=n-1;i>=swap_ind1+1;i--){
                if(nums[i]>nums[swap_ind1]){
                    swap_ind2=i;
                    break;
                }
            }
            swap(nums[swap_ind1],nums[swap_ind2]);
        }
       
        reverse(nums.begin()+swap_ind1+1,nums.end());
    }
};