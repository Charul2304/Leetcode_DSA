// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxi=INT_MIN;
//         int sum=0;
//         for(auto x:nums){
//             sum+=x;
//             if(sum<0) sum=0;
//             maxi=max(maxi,sum);
//         }
//         return maxi;
//     }
// };
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(max<sum)
                max = sum;
            if(sum<0)
                sum=0;
        }
        return max;
    }
};