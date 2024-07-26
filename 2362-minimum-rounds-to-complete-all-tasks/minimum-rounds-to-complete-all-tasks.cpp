class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(auto x:tasks){
            mp[x]++;
        }
        int count=0;
        for(auto x:mp){
            if(x.second==1) return -1;
            while(x.second>3){
                x.second-=3;
                count++;
            }
            if(x.second) count++;
        }
        return count;
    }
};