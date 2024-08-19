class Solution {
public:
    string reformatDate(string date) {
        vector<string> words;
        string word="";
        vector<string> months={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        map<string,int> mpmon;
        for(int i=0;i<12;i++){
            mpmon[months[i]]=i;
        }
        for(auto x:date){
            if(x==' '){
                words.push_back(word);
                word="";
            }
            else{
                word+=x;
            }
        }
        words.push_back(word);
        string res="";
        res+=words[2];
        res+='-';
        int mon=mpmon[words[1]]+1;
        if(mon<10){
            res+='0';
        }
        res+=to_string(mon);
        res+='-';
        if(words[0][1]>='0' && words[0][1]<='9'){
            int date=(words[0][0]-'0')*10+(words[0][1]-'0');
            res+=to_string(date);
        }
        else{
            int date=words[0][0]-'0';
            res+='0';
            res+=to_string(date);
        }
        return res;
    }
};