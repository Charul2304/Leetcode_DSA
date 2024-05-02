class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans=-1;
        vector<int> pos;
        vector<int> neg;
        for(auto x:nums){
            if(x>0){
                pos.push_back(x);
            }
            else{
                neg.push_back(x);
            }
        }
        for(auto x:pos){
            if(find(neg.begin(),neg.end(),-x)!=neg.end()){
                ans=max(ans,x);
            }
        }
        return ans;
    }
};