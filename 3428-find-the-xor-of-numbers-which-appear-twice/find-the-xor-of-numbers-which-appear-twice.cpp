class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int> temp;
        for(auto x:mp){
            if(x.second==2){
                temp.push_back(x.first);
            }
        }
        if(temp.size()==0){
            return 0;
        }
        else if(temp.size()==1){
            return temp[0];
        }
        else{
            int x=temp[0];
            for(int i=1;i<temp.size();i++){
                x=x^temp[i];
            }
            return x;
        }
    }
};