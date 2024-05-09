class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        sort(happiness.rbegin(),happiness.rend());
        for(int i=0;i<k;i++){
            if(happiness[i]-i>0){
                happiness[i]-=i;
                cout<<happiness[i]<<endl;
                ans+=(long long)happiness[i];
            }
        }
        return ans;
    }
};