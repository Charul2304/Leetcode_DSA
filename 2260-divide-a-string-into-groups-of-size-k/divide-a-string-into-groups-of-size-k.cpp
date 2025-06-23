class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int i=0;
        int n=s.size();
        while(i<n){
            string str=s.substr(i,k);
            ans.push_back(str);
            i+=k;
        }
        if(ans.back().size()<k){
            int x=k-ans.back().size();
            while(x--){
                ans.back()+=fill;
            }
        }
        return ans;
    }
};