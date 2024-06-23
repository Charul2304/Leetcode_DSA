class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size()/2;
        int i=0,j=nums.size()-1;
        vector<double>ans;
        sort(nums.begin(),nums.end());
        while(i<n){
            double avg=((double)nums[i]+(double)nums[j])/2;
            ans.push_back(avg);
            i++;
            j--;
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};