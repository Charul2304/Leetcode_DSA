class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxcand=0;
        for(int i=0;i<n;i++){
            maxcand=max(maxcand,candies[i]);
        }
        vector<bool> ans;
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxcand){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};