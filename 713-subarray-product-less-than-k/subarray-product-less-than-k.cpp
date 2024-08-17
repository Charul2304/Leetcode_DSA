class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int i=0,j=0;
        int n=nums.size();
        int product=1;
        int ans=0;
        while(j<n){
            product*=nums[j];
            while(product>=k && i<=j){
                product/=nums[i];
                i++;
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
    }
};