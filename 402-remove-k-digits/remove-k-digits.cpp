class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> st;
        if(num.size()==k) return "0";
        for(char c:num){
            while(k>0 && !st.empty() && st.back()>c){
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        while(k>0){
            st.pop_back();
            k--;
        }
        string ans;
        for(char c:st){
            if(ans.empty() && c=='0') continue;
            ans.push_back(c);
        }
        return ans.empty()?"0":ans;
    }
};