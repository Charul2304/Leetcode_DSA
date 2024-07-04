class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int bal=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                bal++;
            }
            else{
                bal--;
            }
            if(bal==-1){
                ans++;
                bal++;
            }
        }
        return ans+bal;
    }
};