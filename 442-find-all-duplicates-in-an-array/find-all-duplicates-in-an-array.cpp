class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            int ind=abs(nums[i]);
            if(nums[ind-1]<0){
                temp.push_back(ind);
            }
            nums[ind-1]=-nums[ind-1];
        }
        return temp;
    }
};