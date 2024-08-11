class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        string res="";
        while(!pq.empty()){
            int n=pq.top().first;
            char ch=pq.top().second;
            pq.pop();
            for(int i=0;i<n;i++){
                res+=ch;
            }
        }
        return res;
    }
};