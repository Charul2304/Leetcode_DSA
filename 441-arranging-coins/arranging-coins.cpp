class Solution {
public:
    long long staircount(long long n){
        long long ans=(n*(n+1))/2;
        return ans;
    }
    int arrangeCoins(int n) {
        long long low=1;
        long long high=n;
        int res=0;
        while(low<=high){
            long long mid=(low+high)/2;
            if(staircount(mid)<n){
                res=mid;
                low=mid+1;
            }
            else if(staircount(mid) > n){
                high=mid-1;
            }
            else{
                return mid;
            }
        }
        return res;
    }
};