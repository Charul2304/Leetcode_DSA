class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word="";
        for(auto x:s){
            if(x==' '){
                if(!word.empty())words.push_back(word);
                word="";
            }
            else{
                word+=x;
            }
        }
        if(!word.empty()) words.push_back(word);
        stack<string> st;
        for(auto x:words){
            st.push(x);
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            res+=" ";
            st.pop();
        }
        res.pop_back();
        return res;
    }
};