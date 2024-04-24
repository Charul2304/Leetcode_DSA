class Solution {
public:
    void makewords(string s,vector<string>& words){
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
    }
    bool wordPattern(string pattern, string s) {
        map<char,int> letters;
        map<string,int> words;
        vector<string> v;
        makewords(s,v);
        
        int n=0;
        vector<int> v1;
        vector<int> v2;
        for(auto x:pattern){
            if(letters.find(x)!=letters.end()){
                v1.push_back(letters[x]);
            }
            else{
                n++;
                letters[x]=n;
                v1.push_back(letters[x]);
            }
        }
        n=0;
        for(auto x:v){
            if(words.find(x)!=words.end()){
                v2.push_back(words[x]);
            }
            else{
                n++;
                words[x]=n;
                v2.push_back(words[x]);
            }
        }
        
        return v1==v2;
    }
};