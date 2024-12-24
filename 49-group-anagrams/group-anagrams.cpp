class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<string> temp=strs;
        map<string,vector<int>> mp1;
        for(int i=0;i<n;i++){
            sort(temp[i].begin(),temp[i].end());
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