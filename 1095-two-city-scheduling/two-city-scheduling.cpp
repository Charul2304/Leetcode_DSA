class Solution {
public:
    bool static comp(vector<int>& a,vector<int>& b){
        int dif1=abs(a[1]-a[0]);
        int dif2=abs(b[1]-b[0]);
        return dif1>dif2;
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),comp);
        
        int n=costs.size();
        for(int i=0;i<n;i++){
            cout<<costs[i][0]<<"->"<<costs[i][1]<<endl;
        }
        int a=n/2;
        int b=n/2;
        int totalcost=0;
        for(int i=0;i<n;i++){
            vector<int> cost=costs[i];
            if(cost[0]<cost[1] && a>0){
                totalcost+=cost[0];
                a--;
            }
            else if(cost[1]<cost[0] && b>0){
                totalcost+=cost[1];
                b--;
            }
            else if(a>0){
                totalcost+=cost[0];
                a--;
            }
            else if(b>0){
                totalcost+=cost[1];
                b--;
            }
        }
        return totalcost;
    }
};