class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int premod=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            premod=(premod+nums[i])%k;
            if(mp.find(premod)!=mp.end()){
                if(i-mp[premod]>1){
                    return true;
                }
            }
            else{
                mp[premod]=i;
            }
        }
        return false;
    }
};