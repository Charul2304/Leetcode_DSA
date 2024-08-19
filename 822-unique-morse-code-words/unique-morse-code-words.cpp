class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string hash[26]={".-","-...","-.-.","-..",".","..-.","--.","....",
        "..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int n=words.size();
        set<string> st;
        for(int i=0;i<n;i++){
            string s="";
            for(auto x:words[i]){
                s+=hash[x-'a'];
            }
            st.insert(s);
        }
        return st.size();
    }
};