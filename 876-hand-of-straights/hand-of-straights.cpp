class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n % groupSize!=0) return false;
        priority_queue<int,vector<int>,greater<int>> pq;
        unordered_map<int,int> mp;
        for(auto it:hand){
            pq.push(it);
            mp[it]++;
        }
        while(!pq.empty()){
            int topelement=pq.top();
            pq.pop();
            if(mp.find(topelement)==mp.end()){
                continue;
            }
            for(int i=0;i<groupSize;i++){
                if(mp.find(topelement+i)==mp.end()) return false;
                mp[topelement+i]--;
                if(mp[topelement+i]==0){
                    mp.erase(topelement+i);
                }
            }
        }
        return true;
    }
};