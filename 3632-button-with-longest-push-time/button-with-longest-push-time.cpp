class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int n=events.size();
        int maxtime=events[0][1];
        int index=events[0][0];
        for(int i=1;i<n;i++){
            int time=events[i][1]-events[i-1][1];
            if(time>maxtime){
                maxtime=time;
                index=events[i][0];
            }
            else if(time==maxtime){
                index=min(index,events[i][0]);
            }
        }
        return index;
    }
};