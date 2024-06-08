class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        map<int,int> mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                count++;
                mp[count]=i;
            }
        }
        vector<int> ans;
        for(auto x:queries){
            if(mp.find(x)!=mp.end()){
                ans.push_back(mp[x]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};