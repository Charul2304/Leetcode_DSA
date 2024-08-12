class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;
        int n=fruits.size();
        int j=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            mp[fruits[i]]++;
            if(mp.size()>2){
                mp[fruits[j]]--;
                if(mp[fruits[j]]==0){
                    mp.erase(fruits[j]);
                }
                j++;
            }
            else{
                maxlen=max(maxlen,i-j+1);
            }
        }
        return maxlen;

    }
};