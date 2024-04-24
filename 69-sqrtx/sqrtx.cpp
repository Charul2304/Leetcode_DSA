class Solution {
public:
    int mySqrt(int x) {
        int ans;
        if(x==0) return 0;
        for(int i=1;i<=x;i++){
            if(pow(i,2)==x){
                ans=i;
                break;
            }
            else if(pow(i,2)>x){
                ans=i-1;
                break;
            }
        }
        return ans;
    }
};