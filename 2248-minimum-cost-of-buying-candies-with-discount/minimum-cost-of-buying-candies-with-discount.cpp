class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int n=cost.size();
        int sum=0;
        for(auto x:cost){
            sum+=x;
        }
        if(n<3){
            return sum;
        }
        int sumthree=0;
        for(int i=2;i<n;i+=3){
            sumthree+=cost[i];
        }
        return sum-sumthree;
    }
};