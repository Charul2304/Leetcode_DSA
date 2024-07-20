class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy) return (t>1||t==0);
        int time=max(abs(fx-sx),abs(fy-sy));
        if(time<=t) return true;
        return false;
    }
};