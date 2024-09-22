class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int count=0;
        unordered_set<string> st={bannedWords.begin(),bannedWords.end()};
        for(auto x:message){
            if(st.find(x)!=st.end()){
                count++;
            }
            if(count>=2) return true;
        }    
        return count>=2;
    }
};