class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        }
        long long a=k%sum;
        if(a==0) return 0;
        else{
            for(int i=0;i<chalk.size();i++){
                if(chalk[i]>a){
                    return i;
                }
                else{
                    a-=chalk[i];
                }
            }
        }
        return -1;

    }
};