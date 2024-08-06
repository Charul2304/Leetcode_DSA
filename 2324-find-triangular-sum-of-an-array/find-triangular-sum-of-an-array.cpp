class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp=nums;
        while(temp.size()!=1){
            vector<int> v;
            for(int i=0;i<temp.size()-1;i++){
                v.push_back((temp[i]+temp[i+1])%10);
            }
            temp=v;
        }
        return temp[0];
    }
};