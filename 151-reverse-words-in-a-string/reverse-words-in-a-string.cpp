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
                word+=x;
            }
        }
        if(!word.empty()) words.push_back(word);
        reverse(words.begin(),words.end());
        string result="";
        for(auto x:words){
            result+=x;
            result+=" ";
        }
        result.pop_back();
        return result;
    }
};