class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastIndex(26);
        vector<bool> taken(26,false);
        for(int i=0;i<s.size();i++){
            lastIndex[s[i]-'a']=i;
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(taken[s[i]-'a']==true) continue;
            while(res.length()>0 && res.back()>s[i] && lastIndex[res.back()-'a']>i){
                taken[res.back()-'a']=false;
                res.pop_back();
            }
            res.push_back(s[i]);
            taken[s[i]-'a']=true;
        }
        return res;
    }
};