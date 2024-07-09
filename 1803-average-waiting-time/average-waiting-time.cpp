class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        vector<double> times;
        int lastTime=customers[0][0];
        for(int i=0;i<n;i++){
            if(customers[i][0]>lastTime){
                int st=customers[i][0];
                int ft=st+customers[i][1];
                int wt=ft-st;
                lastTime=ft;
                times.push_back(wt);
            }
            else{
                int startTime=lastTime;
                int finishTime=customers[i][1]+lastTime;
                int waitingTime=finishTime-customers[i][0];
                times.push_back(waitingTime);
                lastTime=finishTime;
            }
        }
        for(auto x:times){
            cout<<x<<" ";
        }
        int m=times.size();
        double sum=0;
        for(auto x:times){
            sum+=x;
        }
        double ans=sum/m;
        return ans;
    }
};