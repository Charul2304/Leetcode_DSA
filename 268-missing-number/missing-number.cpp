class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int txor=0;
        for(auto x:nums){
            txor=txor^x;
        }
        for(int i=0;i<=nums.size();i++){
            txor=txor^i;
        }
        return txor;
    }
};