#define ll long long
class Solution {
public:
    ll calHours(vector<int>& v,int hourly){
        ll ans=0;
        for(int i=0;i<v.size();i++){
            ans+=ceil((double)v[i]/(double)hourly);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        ll low=1,high=*max_element(piles.begin(),piles.end());
        ll ans=1e9;
        while(low<=high){
            ll mid=(low+high)/2;
            ll totalH=calHours(piles,mid);
            if(totalH<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return (int)ans;
    }
};