class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int k=s.size();
        int i=0;
        for(auto x:s){
            nums[i]=x;
            i++;
        }
        return k;
    }
};