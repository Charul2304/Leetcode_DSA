class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";
        vector<string> ans;
        map<char,int> mp;
        for(auto x:row1){
            mp[x]=1;
        }
        for(auto x:row2){
            mp[x]=2;
        }
        for(auto x:row3){
            mp[x]=3;
        }
        for(auto x:row1){
            x-=32;
            mp[x]=1;
        }
        for(auto x:row2){
            x-=32;
            mp[x]=2;
        }
        for(auto x:row3){
            x-=32;
            mp[x]=3;
        }
        int n=words.size();
        for(int i=0;i<n;i++){
            set<char> st={words[i].begin(),words[i].end()};
            set<int> s;
            for(auto x:st){
                s.insert(mp[x]);
            }
            if(s.size()==1) ans.push_back(words[i]);
        }
        return ans;
    }
};