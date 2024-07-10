class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int size=asteroids.size();
        for(int i=0;i<size;i++){
            int x=asteroids[i];
            bool exploded=1;
            while(!st.empty() && st.top()>0 && x<0){
                int first=st.top();
                int second=abs(x);
                st.pop();
                if(first>second){
                    x=first;
                }
                else if(first==second){
                    exploded=0;
                    break;
                }
            }
            if(exploded){
                st.push(x);
            }
        }
        int n=st.size();
        vector<int> ans(n);
        n--;
        while(!st.empty()){
            ans[n]=st.top();
            st.pop();
            n--;
        }
        return ans;
    }
};