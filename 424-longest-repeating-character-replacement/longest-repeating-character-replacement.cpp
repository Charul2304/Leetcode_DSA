class Solution {
public:
    int characterReplacement(string s, int k) {
        int hash[26]={0};
        int n=s.size();
        int i=0,j=0;
        int maxlen=0,maxfreq=0;
        while(j<n){
            hash[s[j]-'A']++;
            maxfreq=max(maxfreq,hash[s[j]-'A']);
            if((j-i+1-maxfreq)>k){
                hash[s[i]-'A']--;
                maxfreq=0;
                i++;
            }
            else{
                maxlen=max(maxlen,j-i+1);
            }
            j++;
        }
        return maxlen;
    }
};