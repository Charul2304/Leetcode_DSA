class Solution {
public:
    string minWindow(string s, string t) {
        int minlen=INT_MAX;
        int stIndex=-1;
        int left=0;
        int right=0;
        unordered_map<char,int> mp;
        for(char ch='a';ch<='z';ch++){
            mp[ch]=0;
        }
        for(char ch='A';ch<='Z';ch++){
            mp[ch]=0;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        int count=0;
        while(right<s.size()){
            if(mp[s[right]]>0) count++;
            mp[s[right]]--;
            while(left<=right && count==t.size()){
                if(right-left+1<minlen){
                    minlen=right-left+1;
                    stIndex=left;
                }
                mp[s[left]]++;
                if(mp[s[left]]>0){
                    count--;
                }
                left++;
            }
            right++;
        }
        if(stIndex==-1){
            return "";
        }
        return s.substr(stIndex,minlen);
    }
};