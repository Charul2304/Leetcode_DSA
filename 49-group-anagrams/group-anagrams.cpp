class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto word:strs){
            string key=word;
            sort(key.begin(),key.end());
            if(mp.find(key)==mp.end()){
                mp[key]={word};
            }
            else{
                mp[key].push_back(word);
            }
        }
        vector<vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};