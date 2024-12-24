class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int> mp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            mp[strs[i]]=i;
        }
        vector<string> temp=strs;
        for(int i=0;i<n;i++){
            sort(temp[i].begin(),temp[i].end());
        }
        map<string,vector<int>> mp1;
        for(int i=0;i<n;i++){
            mp1[temp[i]].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto x:mp1){
            vector<string> v;
            for(auto it:x.second){
                v.push_back(strs[it]);
            }
            ans.push_back(v);
        }
        return ans;

    }
};