class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int maxlen=0;
        int n=s.size();
        int i=0,j=0;
        while(j<n){
            if(hash[s[j]]!=-1){
                i=max(i,hash[s[j]]+1);
            }
            hash[s[j]]=j;
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};