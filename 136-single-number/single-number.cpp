class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int txor=0;
        for(auto x:nums){
            txor^=x;
        }
        return txor;
    }
};