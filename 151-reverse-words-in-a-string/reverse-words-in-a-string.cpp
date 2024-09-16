class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word="";
        for(auto x:s){
            if(x==' '){
                if(!word.empty())st.push(word);
                word="";
            }
            else{
                word+=x;
            }
        }
        if(!word.empty()) st.push(word);
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