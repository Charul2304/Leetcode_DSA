class Solution {
public:
    
    bool static comp(vector<int>& a,vector<int>& b){
        return a[1]>b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);
        int size=0;
        int i=0;
        int n=boxTypes.size();
        int maxUnits=0;
        for(int i=0;i<n;i++){
            if(size+boxTypes[i][0] < truckSize){
                size+=boxTypes[i][0];
                maxUnits+=(boxTypes[i][0]*boxTypes[i][1]);
                cout<<maxUnits<<endl;
            }
            else if(size < truckSize){
                int box=truckSize-size;
                cout<<box<<endl;
                size+=box;
                maxUnits+=(box*boxTypes[i][1]);
                cout<<maxUnits<<endl;
                break;
            }
        }
        return maxUnits;
    }
};