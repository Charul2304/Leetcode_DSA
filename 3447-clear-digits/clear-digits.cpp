class Solution {
public:
    string clearDigits(string s) {
        string stack="";
        for(auto x:s){
            if(x>='a' && x<='z'){
                stack.push_back(x);
            }
            else{
                stack.pop_back();
            }
        }
        return stack;
    }
};