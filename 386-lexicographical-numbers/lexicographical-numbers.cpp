class Solution {
public:
    bool static comp(int& a,int& b){
        return to_string(a)<to_string(b);
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i=1;i<=n;i++){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end(),comp);
        return ans;
    }
};