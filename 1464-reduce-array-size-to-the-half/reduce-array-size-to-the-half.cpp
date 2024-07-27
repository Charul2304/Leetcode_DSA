class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto x:arr){
            mp[x]++;
        }
        vector<int> freq;
        for(auto x:mp){
            freq.push_back(x.second);
        }
        sort(freq.begin(),freq.end());
        int n=arr.size();
        int req=n/2;
        int count=0;
        int i=freq.size()-1;
        while(n>req){
            n-=freq[i];
            count++;
            i--;
        }
        return count;
        
    }
};