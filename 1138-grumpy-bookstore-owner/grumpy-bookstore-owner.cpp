class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans=0;
        int n=customers.size();
        int maxsatisfied=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) maxsatisfied+=customers[i];
        }
        int i=0,j=0,cursum=0,maxsum=0;
        while(j<n){
            if(grumpy[j]==1){
                cursum+=customers[j];
            }
            if(j-i+1<minutes){
                j++;
            }
            else{
                maxsum=max(maxsum,cursum);
                if(grumpy[i]==1){
                    cursum-=customers[i];
                }
                i++;
                j++;
            }
        }
        return maxsatisfied+maxsum;
    }
};