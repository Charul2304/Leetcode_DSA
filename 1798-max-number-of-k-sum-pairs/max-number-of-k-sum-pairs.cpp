// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.begin());
//         int n=nums.size();
//         int i=0;
//         int j=n-1;
//         int count=0;
//         while(i<j){
//             if(nums[i]+nums[j]==k){
//                 count++;
//                 i++;
//                 j--;
//             }
//             else if(nums[i]+nums[j]<k){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = 0;
        int left = 0;
        int right = n-1;
        while(left < right)
        {
            if(nums[left] + nums[right] == k)
            {
                count++;
                left++;
                right--;
            }
            else if(nums[left] + nums[right] > k)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return count;
    }
};