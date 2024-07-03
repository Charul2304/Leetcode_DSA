class Solution {
public:
    bool isInc(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<=nums[i]) return false;
        }
        return true;
    }
    bool isDec(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>=nums[i]) return false;
        }
        return true;
    }
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int> arr;
            for(int j=i;j<n;j++){
                arr.push_back(nums[j]);
                if(isInc(arr) || isDec(arr)){
                    int size=arr.size();
                    ans=max(ans,size);
                }
            }
        }
        return ans;
    }
};