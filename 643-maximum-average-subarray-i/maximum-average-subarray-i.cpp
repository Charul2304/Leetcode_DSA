class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=k;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxi=sum;
        while(j<n){
            sum-=nums[i];
            sum+=nums[j];
            maxi=max(maxi,sum);
            i++;
            j++;
        }
        double avg=maxi/k;
        cout<<maxi<<endl;
        return avg;
    }
};