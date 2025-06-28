class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word="";
        for(auto x:s){
            if(x==' '){
                if(!word.empty()) words.push_back(word);
                word="";
            }
            else{
                if(x!=' ')word+=x;
            }
        }
        if(!word.empty()) words.push_back(word);
        reverse(words.begin(),words.end());
        string ans="";
        for(auto x:words){
            ans+=x;
            ans+=" ";
        }
        cout<<words.size()<<endl;
        ans.pop_back();
        return ans;
    }
};