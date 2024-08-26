class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<char,int> mp1;
        for(auto x:suits){
            mp1[x]++;
        }
        if(mp1.size()==1) return "Flush";
        map<int,int> mp2;
        for(auto x:ranks){
            mp2[x]++;
        }
        for(auto x:mp2){
            if(x.second>=3){
                return "Three of a Kind";
            }
        }
        for(auto x:mp2){
            if(x.second==2){
                return "Pair";
            }
        }
        return "High Card";
    }
};