class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word="";
        for(auto x:s){
            if(x==' '){
                if(!word.empty()){
                    st.push(word);
                    word="";
                }
            }
            else{
                word+=x;
            }
        }
        if(!word.empty()){
            st.push(word);
        }
        string result="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
            result+=" ";
        }
        result.pop_back();
        return result;
    }
};