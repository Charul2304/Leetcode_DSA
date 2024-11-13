class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto x:s){
            if((!st.empty() && x==')' && st.top()=='(') || (!st.empty() && x==']' && st.top()=='[') ||
            (!st.empty() && x=='}' && st.top()=='{')){
                st.pop();
            }
            else if(x=='(' || x=='[' || x=='{'){
                st.push(x);
            }
            else{
                return false;
            }
        }
        return st.size()==0;
    }
};