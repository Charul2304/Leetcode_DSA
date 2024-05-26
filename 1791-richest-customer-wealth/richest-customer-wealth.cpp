class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        int m=accounts.size();
        int n=accounts[0].size();
        for(auto x:accounts){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=x[i];
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};