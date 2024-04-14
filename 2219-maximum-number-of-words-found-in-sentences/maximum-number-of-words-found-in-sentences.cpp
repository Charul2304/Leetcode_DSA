class Solution {
public:
    int wordcount(string& s){
        vector<string> words;
        string word="";
        for(auto x:s){
            if(x==' '){
                words.push_back(word);
                word="";
            }
            else{
                word+=x;
            }
        }
        words.push_back(word);
        return words.size();
    }
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(auto x:sentences){
            ans=max(ans,wordcount(x));
        }
        return ans;
    }
};