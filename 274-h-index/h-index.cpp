class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        sort(citations.begin(),citations.end());
        int maxi=0;
        for(int i=0;i<n;i++){
            int papers=n-i;
            if(citations[i]>=papers){
                maxi=max(maxi,papers);
            }
        }
        return maxi;
    }
};