class Solution {
public:
    int passThePillow(int n, int time) {
        if(time < n) return time+1;
        
        int a=time%(n-1);
        int d=time/(n-1);
        if(d%2==0){
            return a+1;
        }
        return n-a;
        
    }
};