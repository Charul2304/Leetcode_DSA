class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        int t0=0,t1=1,t2=1;
        int ans=0;
        int s=n-2;
        while(s--){
            int a=t0;
            int b=t1;
            int c=t2;
            t0=b;
            t1=c;

            ans=a+b+c;
            t2=ans;
        }
        return ans;
    }
};