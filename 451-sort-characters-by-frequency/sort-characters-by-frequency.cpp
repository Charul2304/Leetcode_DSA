class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        string result="";
        while(!pq.empty()){
            int freq=pq.top().first;
            char c=pq.top().second;
            pq.pop();
            while(freq--){
                result+=c;
            }
        }
        return result;
    }
};