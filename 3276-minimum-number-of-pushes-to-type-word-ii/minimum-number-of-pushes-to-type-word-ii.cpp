class Solution {
public:
    bool static comp(pair<char,int>& a,pair<char,int>& b){
        return a.second>b.second;
    }
    int minimumPushes(string word) {
        map<char,int> mp;
        for(auto x:word){
            mp[x]++;
        }
        int sum=0;
        for(auto x:mp){
            sum+=x.second;
        }
        if(mp.size()<=8){
            return sum;
        }
        vector<pair<char,int>> v;
        for(auto x:mp){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),comp);
        int ans=0;
        int count=0;
        int mul=1;
        for (auto x : v) {
            if (count == 8) {
                mul++;
                count = 0;
            }
            cout<<mul<<endl;
            ans += (x.second * mul);
            cout<<ans<<endl;
            count++;
            
        }
        return ans;
    }
};