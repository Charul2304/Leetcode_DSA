class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idex=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                idex=i;
                break;
            }
        }
        if(idex!=-1){
            reverse(word.begin(),word.begin()+idex+1);
        }
        return word;
    }
};