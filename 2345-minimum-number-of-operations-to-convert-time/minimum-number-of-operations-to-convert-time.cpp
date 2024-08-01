class Solution {
public:
    int convertTime(string current, string correct) {
        string s1=current.substr(0,2);
        string s2=current.substr(3,2);
        int n1=stoi(s1)*60+stoi(s2);
        string s3=correct.substr(0,2);
        string s4=correct.substr(3,2);
        int n2=stoi(s3)*60+stoi(s4);
        cout<<n1<<" "<<n2<<endl;
        int diff=n2-n1;
        int operations=0;
        while(diff){
            if(diff>=60){
                operations+=(diff/60);
                diff=diff%60;
            }
            else if(diff>=15){
                operations+=(diff/15);
                diff=diff%15;
            }
            else if(diff>=5){
                operations+=(diff/5);
                diff=diff%5;
            }
            else if(diff>=1){
                operations+=(diff/1);
                diff=diff%1;
            }
        }
        return operations;
    }
};