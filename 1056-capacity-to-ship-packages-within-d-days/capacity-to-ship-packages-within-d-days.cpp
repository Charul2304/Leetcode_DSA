class Solution {
public:
    int FindDays(vector<int>& weights, int cap){
        int load=0;
        int ans=1;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
                ans++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return ans;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(auto x:weights){
            high+=x;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int ndays=FindDays(weights,mid);
            if(ndays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};