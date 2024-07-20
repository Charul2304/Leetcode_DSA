class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizantalCut, vector<int>& verticalCut) {
        sort(horizantalCut.rbegin(),horizantalCut.rend());
        sort(verticalCut.rbegin(),verticalCut.rend());
        int vertical=1;
        int horizantal=1;
        int i=0,j=0;
        long long cost=0;
        while(i<m-1 && j<n-1){
            if(verticalCut[j]>=horizantalCut[i]){
                cost+=verticalCut[j]*horizantal;
                vertical++;
                j++;
            }
            else{
                cost+=horizantalCut[i]*vertical;
                horizantal++;
                i++;
            }
        }
        while(i<m-1){
            cost+=horizantalCut[i]*vertical;
            horizantal++;
            i++;
        }
        while(j<n-1){
            cost+=verticalCut[j]*horizantal;
            vertical++;
            j++;
        }
        return cost;
    }
};