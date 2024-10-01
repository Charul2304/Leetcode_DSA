class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int txor=0;
        for(int i=0;i<=n;i++){
            txor=txor^i;
        }
        for(int i=0;i<n;i++){
            txor=txor^nums[i];
        }
        return txor;
    }
};