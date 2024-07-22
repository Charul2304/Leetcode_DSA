class Solution {
public:
    struct comp {
        bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
            if (a.first == b.first) {
                return a.second > b.second;
            } else {
                return a.first < b.first;
            }
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>,vector<pair<int,string>>,comp> pq;
        unordered_map<string,int> mp;
        for(auto x:words){
            mp[x]++;
        }
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        vector<string> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};