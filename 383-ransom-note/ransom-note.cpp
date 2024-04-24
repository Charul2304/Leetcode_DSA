class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m1;
        map<char,int> m2;
        for(auto x:ransomNote){
            m1[x]++;
        }
        for(auto x:magazine){
            m2[x]++;
        }
        for(auto x:m1){
            if(m2[x.first]<m1[x.first] || m2.find(x.first)==m2.end()){
                return false;
            }
        }
        return true;
    }
};