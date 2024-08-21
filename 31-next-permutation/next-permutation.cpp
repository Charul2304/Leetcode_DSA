class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int swap_index1=-1;

        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                swap_index1=i-1;
                break;
            }
        }

        int swap_index2=swap_index1;

        if(swap_index1!=-1){
            for(int i=n-1;i>=swap_index1+1;i--){
                if(nums[i]>nums[swap_index1]){
                    swap_index2=i;
                    break;
                }
            }
            swap(nums[swap_index1],nums[swap_index2]);
        }

        reverse(nums.begin()+swap_index1+1,nums.end());
    }
};