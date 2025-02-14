class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n5=0;
        int n10=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                n5++;
            }
            else if(bills[i]==10){
                if(n5>0){
                    n5--;
                }
                else{
                    return false;
                }
                n10++;
            }
            else if(bills[i]==20){
                if(n10>0 && n5>0){
                    n10--;
                    n5--;
                }
                else if(n5>2){
                    n5-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};