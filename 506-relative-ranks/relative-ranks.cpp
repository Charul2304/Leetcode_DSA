class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,string> mp;
        vector<int> v=score;
        sort(v.rbegin(),v.rend());
        int a=4;
        for(int i=0;i<score.size();i++){
            if(i==0){
                mp.insert({v[0],"Gold Medal"});
            }
            else if(i==1){
                mp.insert({v[1],"Silver Medal"});
            }
            else if(i==2){
                mp.insert({v[2],"Bronze Medal"});
            }
            else{
                mp.insert({v[i],to_string(a)});
                a++;    
            } 
        }
        vector<string> ans;
        for(auto x:score){
            if(mp.find(x)!=mp.end()){
                ans.push_back(mp[x]);
            }
        }
        return ans;
    }
};