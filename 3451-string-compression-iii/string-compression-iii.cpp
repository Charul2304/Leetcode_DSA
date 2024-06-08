class Solution {
public:
    string compressedString(string word) {
        string ans="";
        int n=word.size();
        int count=0;
        int i=0,j=0;
        while(j<n){
            count=0;
            while(j<n && count<9 && word[i]==word[j]){
                count++;
                j++;
            }
            ans+=to_string(count);
            ans+=word[i];
            i=j;
        }
        return ans;
    }
};