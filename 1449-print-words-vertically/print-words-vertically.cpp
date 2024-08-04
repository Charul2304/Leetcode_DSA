class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> words;
        string word="";
        for(auto x:s){
            if(x==' '){
                words.push_back(word);
                word="";
            }
            else{
                word+=x;
            }
        }
        words.push_back(word);
        int m=words.size();
        int n=0;
        for(auto x:words){
            int size=x.size();
            n=max(n,size);
        }
        for(int i=0;i<m;i++){
            if(words[i].size()<n){
                int size=n-words[i].size();
                while(size--){
                    words[i]+=' ';
                }
            }
            else{
                continue;
            }
        }
        vector<string> ans;
        for(int i=0;i<n;i++){
            string res="";
            for(int j=0;j<m;j++){
                res+=words[j][i];
            }
            ans.push_back(res);
        }
        for(int i=0;i<ans.size();i++){
            int j=m-1;
            while(ans[i][j]==' '){
                ans[i].pop_back();
                j--;
            }
        }
        return ans;
    }
};