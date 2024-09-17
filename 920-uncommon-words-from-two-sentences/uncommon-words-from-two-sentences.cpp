class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> mp1;
        map<string,int> mp2;
        string word="";
        for(auto x:s1){
            if(x==' '){
                mp1[word]++;
                word="";
            }
            else{
                word+=x;
            }
        }
        mp1[word]++;
        word="";
        for(auto x:s2){
            if(x==' '){
                mp2[word]++;
                word="";
            }
            else{
                word+=x;
            }
        }
        mp2[word]++;
        vector<string> ans;
        for(auto x:mp1){
            if(x.second==1 && mp2.find(x.first)==mp2.end()){
                ans.push_back(x.first);
            }
        }
        for(auto x:mp2){
            if(x.second==1 && mp1.find(x.first)==mp1.end()){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};