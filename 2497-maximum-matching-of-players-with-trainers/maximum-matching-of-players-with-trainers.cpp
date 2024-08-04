class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int m=players.size();
        int n=trainers.size();
        int i=0,j=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count=0;
        while(i<m && j<n){
            if(players[i]<=trainers[j]){
                count++;
                i++;
                j++;
            }
            else j++;
        }
        return count;
    }
};