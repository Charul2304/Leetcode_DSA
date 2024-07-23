class Solution {
public:
    bool static cmp(pair<int,int>& a,pair<int,int>& b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        else{
            return a.second<b.second;
        }
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>> v;
        for(auto x:mp){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),cmp);
        vector<int> ans;
        for(auto x:v){
            for(int i=0;i<x.second;i++){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};