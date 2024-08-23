class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi=0;
        int n=strs.size();
        for(int i=0;i<n;i++){
            bool flag=false;
            int num=0;
            for(auto x:strs[i]){
                if(x>='a' & x<='z'){
                    flag=true;
                    break;
                }
            }
            if(flag){
                num=strs[i].size();
            }
            else{
                num=stoi(strs[i]);
            }
            maxi=max(maxi,num);
        }
        return maxi;
    }
};