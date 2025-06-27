class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto word:strs){
            string key=word;
            sort(key.begin(),key.end());
            mp[key].push_back(word);
        }
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};