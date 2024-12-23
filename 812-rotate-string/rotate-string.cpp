class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        int n=s.size();
        goal+=goal;
        int size=s.size();
        for(int i=0;i<(size+1);i++){
            if(goal.substr(i,size)==s) return true;
        }
        return false;
    }
};