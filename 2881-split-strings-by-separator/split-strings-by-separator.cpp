class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        string word="";
        int n=words.size();
        for(int i=0;i<n;i++){
            for(auto x:words[i]){
                if(x==separator){
                    if(word!="") ans.push_back(word);
                    word="";
                }
                else{
                    word+=x;
                }
            }
            if(word!="") ans.push_back(word);
            word="";
        }
        return ans;
    }
};