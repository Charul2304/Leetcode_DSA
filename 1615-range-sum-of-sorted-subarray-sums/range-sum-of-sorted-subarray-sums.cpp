class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarrays;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                subarrays.push_back(sum);
            }
        }
        sort(subarrays.begin(),subarrays.end());
        for(auto x:subarrays){
            cout<<x<<" ";
        }
        long long ans=0;
        for(int i=left-1;i<right;i++){
            ans+=subarrays[i];
        }
        const int mod=1e9+7;
        return ans%mod;
    }
};