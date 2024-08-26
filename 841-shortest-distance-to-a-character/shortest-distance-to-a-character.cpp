class Solution {
public:
    int finddis(int num,vector<int>& arr){
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++){
            ans=min(ans,abs(num-arr[i]));
        }
        return ans;
    }
    vector<int> shortestToChar(string s, char c) {
        vector<int> indices;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==c){
                indices.push_back(i);
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(finddis(i,indices));
        }
        return ans;
    }
};