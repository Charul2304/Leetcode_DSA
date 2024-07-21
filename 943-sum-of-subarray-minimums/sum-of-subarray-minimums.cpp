
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> nse(n);
        vector<int> psee(n);
        stack<int> s1;
        stack<int> s2;
        for(int i=n-1;i>=0;i--){
            while(!s1.empty() && arr[s1.top()]>=arr[i]){
                s1.pop();
            }
            nse[i]=s1.empty()?n:s1.top();
            s1.push(i);
        }
        for(int i=0;i<n;i++){
            while(!s2.empty() && arr[s2.top()]>arr[i]){
                s2.pop();
            }
            psee[i]=s2.empty() ? -1:s2.top();
            s2.push(i);
        }
        int total=0;
        int mod = (int)(1e9 + 7);
        for(int i=0;i<n;i++){
            int left=i-psee[i];
            int right=nse[i]-i;
            total=(total+(left*right*1LL*arr[i])%mod)%mod;
        }
        return total;
    }
};