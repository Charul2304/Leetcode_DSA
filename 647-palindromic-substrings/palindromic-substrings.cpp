class Solution {
public:
    bool isPalindrome(string s){
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            string res="";
            for(int j=i;j<n;j++){
                res+=s[j];
                if(isPalindrome(res)){
                    ans++;
                }
            }
        }
        return ans;
    }
};