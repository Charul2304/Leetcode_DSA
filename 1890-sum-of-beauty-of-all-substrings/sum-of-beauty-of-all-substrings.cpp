class Solution {
public:
    
    int beautySum(string s) {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                int maxi=0;
                int mini=INT_MAX;
                for(auto x:mp){
                    maxi=max(maxi,x.second);
                    mini=min(mini,x.second);
                }
               
                ans+=maxi-mini;
            }
        }
        return ans;
    }
};
