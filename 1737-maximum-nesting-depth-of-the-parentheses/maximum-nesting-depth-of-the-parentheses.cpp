class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans=0;
        for(auto x:s){
            if(x=='(') st.push(x);
            else if(x==')'){
                int m=st.size();
                ans=max(ans,m);
                st.pop();
            }
        }
        return ans;
    }
};