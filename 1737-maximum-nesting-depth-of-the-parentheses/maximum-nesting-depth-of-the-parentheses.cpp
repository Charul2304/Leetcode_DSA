class Solution {
public:
    int maxDepth(string s){
        int ans=0;
        int count=0;
        for(auto x:s){
            if(x=='(') count++;
            else if(x==')'){
                ans=max(ans,count);
                count--;
            }
        }
        return ans;
    }
};