class Solution {
public:
    bool static compare(vector<int>& a,vector<int>& b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        int count=1;
        int lastEnd=intervals[0][1];
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0]>=lastEnd){
                count++;
                lastEnd=intervals[i][1];
            }
        }
        return intervals.size()-count;
    }
};