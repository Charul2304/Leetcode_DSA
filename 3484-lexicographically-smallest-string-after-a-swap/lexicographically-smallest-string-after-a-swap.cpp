class Solution {
public:
    
    string getSmallestString(string s) {
        string temp=s;
        string ans=temp;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if((s[i]-'0')%2==(s[i+1]-'0')%2){
                swap(s[i],s[i+1]);
                ans=min(ans,s);
                
                s=temp;
            }
            else{
                continue;
            }
        }
        return ans;
    }
};