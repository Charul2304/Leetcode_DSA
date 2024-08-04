class Solution {
public:
    bool ispalindrome(string& str){
        int n=str.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            if(str[i]==str[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        string ans="";
        int maxlen=0;
        for(int i=0;i<n;i++){
            string a="";
            for(int j=i;j<n;j++){
                a+=s[j];
                if(ispalindrome(a) && j-i+1>maxlen){
                    
                    maxlen=j-i+1;
                    ans=a;
                }
            }
        }
        return ans;
    }
};