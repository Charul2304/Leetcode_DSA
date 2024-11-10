class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ind=nums[i];
            if(nums[abs(ind)]<0){
                return abs(ind);
            }
            else{
                nums[abs(ind)]=-nums[abs(ind)];
            }
        }
        return -1;
    }
};