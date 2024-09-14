class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(auto x:s){
            if(!st.empty()){
                if(x=='B' && st.top()=='A'){
                    st.pop();
                    continue;
                }
                else if(x=='D' && st.top()=='C'){
                    st.pop();
                    continue;
                }
            }
            st.push(x);
        }
        return st.size();
    }
};