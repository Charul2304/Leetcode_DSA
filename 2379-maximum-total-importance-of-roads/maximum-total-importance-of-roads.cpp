class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> degree(n,0);
        for(auto x:roads){
            degree[x[0]]++;
            degree[x[1]]++;
        }
        sort(degree.begin(),degree.end());
        long long val=1;
        long long importance=0;
        for(auto d:degree){
            importance+=(val*d);
            val++;
        }
        return importance;
    }
};