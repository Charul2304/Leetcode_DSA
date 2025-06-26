class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int begin=0,mid=0,end=n-1;
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[mid],nums[begin]);
                mid++;
                begin++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[end]);
                end--;
            }
            else{
                mid++;
            }
        }
    }
};