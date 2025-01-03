class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int numzero=0;
        int maxlen=0;
        while(j<n){
            if(nums[j]==0) numzero++;
            while(numzero>k){
                if(nums[i]==0) numzero--;
                i++;
            }
            if(numzero<=k){
                maxlen=max(maxlen,j-i+1);
            }
            j++;
        }
        return maxlen;
    }
};