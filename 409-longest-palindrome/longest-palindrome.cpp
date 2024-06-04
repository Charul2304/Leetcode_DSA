class Solution {
public:
    int longestPalindrome(string s) {
        map<int,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        int ans=0;
        bool flag=false;
        for(auto x:mp){
            int f=x.second;
            if(f%2==0){
                ans+=f;
            }
            else{
                ans+=f-1;
                flag=true;
            }
        }
        if(flag) ans+=1;
        return ans;
    }
};