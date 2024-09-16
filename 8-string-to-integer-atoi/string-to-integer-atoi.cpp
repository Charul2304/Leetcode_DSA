class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        bool pos=false;
        bool neg=false;
        int i=0;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            neg=true;
            i++;
        }
        else if(s[i]=='+'){
            pos=true;
            i++;
        }
        else{
            pos=true;
        }
        double num=0;
        while(s[i]>='0' && s[i]<='9'){
            num=num*10+(s[i]-'0');
            i++;
        }
        if(neg) num=-num;
        if(num>INT_MAX) num=INT_MAX;
        if(num<INT_MIN) num=INT_MIN;
        
        return int(num);
    }
};