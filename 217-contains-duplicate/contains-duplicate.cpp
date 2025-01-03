class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>=2){
                return true;
            }
        }
        return false;
    }
};