class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        map<int,int> mp;
        for(auto x:nums){
            mp[x]=1;
        }
        vector<int> temp;
        for(auto x:mp){
            temp.push_back(x.first);
            cout<<x.first<<" ";
        }
        int count=1;
        int maxcount=1;
        for(int i=1;i<temp.size();i++){
            if(temp[i]-temp[i-1]==1) count++;
            else count=1;
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};