class Solution {
public:
    int convert(int n,vector<int>& mapping){
        if (n == 0)  return mapping[0];
        int ans=0;
        int mul=1;
        while(n){
            ans+=mapping[(n%10)]*mul;
            n/=10;
            mul*=10;
        }
        return ans;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({convert(nums[i],mapping),i});
        }
        sort(v.begin(),v.end());
        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            res[i]=nums[v[i].second];
        }
        return res;
    }
};