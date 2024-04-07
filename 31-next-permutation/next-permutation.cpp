class Solution {
public:
    //c++ inbuild function method
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        next_permutation(nums.begin(),nums.end());
    }
};