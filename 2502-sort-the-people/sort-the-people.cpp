class Solution {
public:
    bool static comp(pair<string,int>& a,pair<string,int>& b){
        return a.second>b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> v;
        int n=names.size();
        for(int i=0;i<n;i++){
            v.push_back({names[i],heights[i]});
        }
        sort(v.begin(),v.end(),comp);
        vector<string> ans;
        for(auto x:v){
            ans.push_back(x.first);
        }
        return ans;
    }
};