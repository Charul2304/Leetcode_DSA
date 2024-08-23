class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0,maxlen=0,zeroes=0;
        while(j<n){
            if(nums[j]==0) zeroes++;
            while(zeroes>k){
                if(nums[i]==0) zeroes--;
                i++;
            }
            if(zeroes<=k){
                maxlen=max(maxlen,j-i+1);
            }
            j++;
        }
        return maxlen;
    }
};