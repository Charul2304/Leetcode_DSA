class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=-1;
        for(auto x:mp){
            if(x.second>1){
                ans=x.first;
                break;
            }
        }
        return ans;
    }
};