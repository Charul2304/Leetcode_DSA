class Solution {
public:
    int percentageLetter(string s, char letter) {
        double count=0;
        for(auto x:s){
            if(x==letter){
                count++;
            }
        }
        double size=s.size();
        int ans=(count/size)*100;
        return ans;
    }
};