class Solution {
public:
    bool isConsis(string w,string s){
        for(auto x:s){
            if(find(w.begin(),w.end(),x)==w.end()){
                return false;
            }
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(isConsis(allowed,words[i])){
                count++;
            }
        }
        return count;
    }
};