class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                bool elp= (i==0) || (flowerbed[i-1]==0);
                bool erp= (i==flowerbed.size()-1) || (flowerbed[i+1]==0);
                if(elp && erp){
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        return count>=n;
    }
};