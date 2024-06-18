class Solution {
public:
    bool possible(vector<int>& bloomDay, int day,int m, int k){
        int totB=0;
        int count=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                totB+=(count/k);
                count=0;
            }
        }
        totB+=(count/k);
        return totB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=1ll*m*1ll*k;
        if(val>1ll*bloomDay.size()) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=1e9; 
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

};