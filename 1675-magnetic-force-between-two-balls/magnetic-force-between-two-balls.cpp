class Solution {
public:
    bool possible(int x,vector<int>& position, int m){
        int curpos=position[0];
        int balls=1;
        for(int i=1;i<position.size();i++){
            if(position[i]-curpos>=x){
                curpos=position[i];
                balls++;
            }
        }
        return balls>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        
        int low=1;
        int high=position.back()-position[0];
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(mid,position,m)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};