class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto x:queries){
            int xorr=arr[x[0]];
            for(int i=x[0]+1;i<=x[1];i++){
                xorr^=arr[i];
            }
            ans.push_back(xorr);
        }
        return ans;
    }
};