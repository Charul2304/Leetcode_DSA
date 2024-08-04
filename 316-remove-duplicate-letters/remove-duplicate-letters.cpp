class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastseen(26, 0);
        vector<bool> taken(26, false);
        for (int i = 0; i < s.size(); i++) {
            lastseen[s[i] - 'a'] = i;
        }
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (taken[ch - 'a']) continue;
            
            while (!st.empty() && st.top() > ch && lastseen[st.top() - 'a'] > i) {
                taken[st.top() - 'a'] = false;
                st.pop();
            }
            
            st.push(ch);
            taken[ch - 'a'] = true;
        }
        string res;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
