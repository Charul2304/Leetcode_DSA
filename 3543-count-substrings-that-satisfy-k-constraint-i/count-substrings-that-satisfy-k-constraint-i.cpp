class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size();
        int count=0;
        for(int i=0;i<s.size();i++){
            int num0=0;
            int num1=0;
            for(int j=i;j<n;j++){
                if(s[j]=='0') num0++;
                else num1++;
                if(num0<=k || num1<=k) count++;
            }
        }
        return count;
    }
};