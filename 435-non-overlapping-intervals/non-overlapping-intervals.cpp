class Solution {
public:
    bool static comp(vector<int>& a,vector<int>& b){
        return a[1]<b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=1;
        sort(intervals.begin(),intervals.end(),comp);
        int n=intervals.size();
        int lastseen=intervals[0][1];
        for(int i=0;i<n;i++){
            if(lastseen<=intervals[i][0]){
                count++;
                lastseen=intervals[i][1];
            }
        }
        return n-count;
    }
};