class Solution {
public:
    bool static comp(pair<int,int>& a,pair<int,int>& b){
        return a.first>b.first;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mp;
        for(auto x:arr){
            mp[x]++;
        }
        vector<pair<int,int>> v;
        for(auto x:mp){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end(),comp);
        int n=v.size();
        for(int i=n-1;i>=0;i--){
            if(v[i].first<=k){
                v.pop_back();
                k-=v[i].first;
            }
        }
        return v.size();
    }
};