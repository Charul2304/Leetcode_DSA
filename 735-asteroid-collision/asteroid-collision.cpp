class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for(auto x:asteroids){
            if(x>0) st.push_back(x);
            else{
                while(!st.empty() && st.back()>0 && st.back()<abs(x)){
                    st.pop_back();
                }
                if(!st.empty() && abs(x)==st.back()){
                    st.pop_back();
                    continue;
                }
                else if(st.empty() || st.back()<0){
                    st.push_back(x);
                }
            }
        }
        return st;
    }
};