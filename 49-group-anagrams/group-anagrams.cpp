class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp=strs;
        int n=strs.size();
        for(int i=0;i<n;i++){
            sort(temp[i].begin(),temp[i].end());
        }
        map<string,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[temp[i]].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto x:mp){
            vector<string> v;
            for(auto it:x.second){
                v.push_back(strs[it]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};