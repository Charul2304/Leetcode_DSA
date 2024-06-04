class Solution {
public:
    int f(vector<int>& nums, int k){
        int n=nums.size();
        int left=0;
        int right=0;
        int count=0;
        unordered_map<int,int> mp;
        while(right<n){
            mp[nums[right]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0)mp.erase(nums[left]);
                left++;
            }
            count+=(right-left+1);
            right++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};