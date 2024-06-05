class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        vector<int> comcount(26),curcount(26);
        for(char& x:words[0]){
            comcount[x-'a']++;
        }
        for(int i=1;i<words.size();i++){
            fill(curcount.begin(), curcount.end(),
                 0);
            for(char& x:words[i]){
                curcount[x-'a']++;
            }
            for(int letter=0;letter<26;letter++){
                comcount[letter]=min(comcount[letter],curcount[letter]);
            }
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<comcount[i];j++){
                ans.push_back(string(1,i+'a'));
            }
        }
        return ans;
    }
};