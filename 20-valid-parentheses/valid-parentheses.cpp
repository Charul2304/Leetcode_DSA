class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto x:s){
            if(x=='(' || x=='{' || x=='['){
                st.push(x);
            }
            else{
                if(x==')' && !st.empty() && st.top()=='('){
                    st.pop();
                }
                else if(x=='}' && !st.empty() && st.top()=='{'){
                    st.pop();
                }
                else if(x==']' && !st.empty() && st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.size()==0;
    }
};