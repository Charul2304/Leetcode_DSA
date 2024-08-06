class Solution {
public:
    int f(string& a){
        sort(a.begin(),a.end());
        map<char,int> mp;
        for(auto x:a){
            mp[x]++;
        }
        return mp[a[0]];
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        int n=queries.size();
        vector<int> q(n);
        for(int i=0;i<n;i++){
            q[i]=f(queries[i]);
        }
        int m=words.size();
        vector<int> w(m);
        for(int i=0;i<m;i++){
            w[i]=f(words[i]);
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(q[i]<w[j]){
                    count++;
                }
            }
            ans[i]=count;
        }
        return ans;
    }
};