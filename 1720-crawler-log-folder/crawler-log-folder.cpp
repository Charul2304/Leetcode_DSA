class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(auto x:logs){
            if(x=="../"){
                if(count>0) count--;
            }
            else if(x=="./"){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
    }
};