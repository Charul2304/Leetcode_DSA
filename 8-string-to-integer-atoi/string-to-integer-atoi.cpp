class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        while(s[i]==' '){
            i++;
        }
        
        bool pos=0;
        bool neg=0;
        if(s[i]=='-'){
            neg=1;
            i++;
        }
        else if(s[i]=='+'){
            pos=1;
            i++;
        }
        else pos=1;
        double num=0;
        
        while(s[i]>='0' && s[i]<='9'){
            num=num*10+(s[i]-'0');
            i++;
        }
        if(neg==1) num=-num;
        if(num>INT_MAX) num=INT_MAX;
        if(num<INT_MIN) num=INT_MIN;
        else num=num;
        return int(num);
    }
};