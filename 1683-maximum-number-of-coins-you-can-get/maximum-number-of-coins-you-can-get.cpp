class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int coins=n/3;
        sort(piles.rbegin(),piles.rend());
        int i=1;
        int ans=0;
        while(coins--){
            ans+=piles[i];
            i+=2;
        }
        return ans;
    }
};